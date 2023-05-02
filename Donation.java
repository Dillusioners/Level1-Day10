import java.io.*;
class Donation
{
	static BufferedReader rd = new BufferedReader(new InputStreamReader(System.in));
	static Donation obj = new Donation();
	static double TOTAL = 0;
	static String name;
	static int age;
	static boolean SignUpped = false;
	//Display function to show options for donor
	void display()
	{
		System.out.println("#########################");
		System.out.println(" WELCOME TO DONATION CLUB ");
		System.out.println("#########################");
		System.out.println("1.Donate\n"
						  +"2.Sign Up\n"
						  +"3.Print Receit\n"
						  +"5.Exit\n"
						  +"(-)Enter your option => ");

	}

	//Donating simulation
	void Donate()throws IOException
	{
		//If user not signed up
		if(!SignUpped)
			SignUp();
		//Donation amount
		double donat;
		System.out.println(">> Enter the amount you want to donate");
		try{
			//No -ve donation
			donat = Double.parseDouble(rd.readLine());
			if(donat < 0){
				System.out.println(">> Invalid Amount!!");
				System.exit(0);
			}
			else{
				//Adding donated amount to total
				TOTAL += donat;
				System.out.println(">> Thank you for donating " + donat + "Rs to the charity");
			}
			
		}catch(Exception e)
		{
			System.out.println(">> Invalid amount! ");
		}
	}
	//SignUp
	void SignUp() throws IOException
	{
		//Signup for user if not signed up
		if(SignUpped){
			System.out.println(">> Already Signed up\n\n");
		}else{
			System.out.println(">> Please enter your name");
			name = rd.readLine();
			System.out.println(">> Enter your age : ");
			age = Integer.parseInt(rd.readLine());
			if(age < 18){
				System.out.println(">> Too Young !");
				System.exit(0);
			}
			if(age > 70){
				System.out.println(">> Too Old");
				System.exit(0);
			}
			System.out.println(">> Successfully Registered!!!");
			SignUpped = true;
		}
		
	}
	//Printing receipt
	void PrintReciept()throws IOException
	{
		if(!SignUpped)
			SignUp();
		else{
			System.out.println("###############");
			System.out.println("      BILL    ");
			System.out.println("###############");
			System.out.println("NAME : "+name);
			System.out.println("AGE : "+age);
			System.out.println("DONATION : "+TOTAL+"Rs\n\n");
		}
		
	}

	


	public static void main(String[] args) {
			while(true){
				obj.display();
				try{
						//Asking for users choice
						int choice = Integer.parseInt(rd.readLine());
						if(choice > 5 || choice < 1)
							System.err.println("(-)Invalid Input!!");
						else if(choice == 5){
							System.out.println("(-)Have a good day Sir!");
							break;
						}
						else if(choice == 1)
							obj.Donate();
						else if(choice == 2)
							obj.SignUp();
						else if(choice == 3)
							obj.PrintReciept();
						else
							System.out.println("Invalid input!!");
	
					}catch(Exception e)
					{
						System.out.println("(-)Wrong input sir !");
				}
		}
		//Program ends
			System.out.println("Thank you for visiting ");
	}
}