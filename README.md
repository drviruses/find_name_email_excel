# find_name_email_excel
Extracting corresponding names of emails from excel sheet

        Motivaton:
        This is just a practical application of HashMap. As we know searching, inserting, deleting takes θ(1) time.
        This can be used for many purposes, I designed it because, my Student Club organised an event where more 
        than 900+ participants took part and at the final we have only 346 participants who were eligible for certification.
        And at the end we end up with having eligible student's Email addresses.
        But we required names respective to the Email address for auto generating certification script.

    What I just simply did I used HashMap to store Email as key and their Name and phone number as Values in form of pair.
    
    In the code the variable total_email_name takes the total pairs of Email ,Names, and phone numbers the extract variable is for the number of email's name you want to find:
    You just need to paste the email and names in the format [email] and its respective [names]
          Input:
              total_emal_name
              [email] [name]
              [email] [name]
              [email] [name]
              [email] [name]
                     .
                     . 
                     .
              [email] [name]
              extract
              [email]
              [email]
                .
                .
                .
              [email]
    
    To store the result in an Excel , we need to treat values as commmas seprated.
    After this whole process in the same directory in which you are running the code , two files will be created :
                1. email_found.csv (where you will get the Names corresponding to the Emails)
                2. email_not_found.csv (where email will be stored which name was not there in files)
              
