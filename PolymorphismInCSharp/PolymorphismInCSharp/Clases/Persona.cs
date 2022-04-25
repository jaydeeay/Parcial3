using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PolymorphismInCSharp.Clases
{
    class Persona
    {
        string firstName, lastName;

        public string FirstName 
        { 
            get => firstName; 
            set
            {
                if(!string.IsNullOrEmpty(value) && !string.IsNullOrWhiteSpace(value) && value.Length <= 15)
                {
                    firstName = value;
                }
                else
                {
                    throw new Exception("Error");
                }
            }
        }

        public string LastName 
        { 
            get => lastName;
            set
            {
                if (!string.IsNullOrEmpty(value) && !string.IsNullOrWhiteSpace(value) && value.Length <= 15)
                {
                    lastName = value;
                }
                else
                {
                    throw new Exception("Error");
                }
            }
        }

        public Persona(string firstName, string lastName)
        {
            FirstName = firstName;
            LastName = lastName;
        }

        public virtual string DisplayInfo()
        {
            string result = "";

            result += "Name: " + firstName + "\n";
            result += "LastName: " + lastName + "\n";

            return result;
        }

        public Persona Destroy()
        {
            return null;
        }
    }
}
