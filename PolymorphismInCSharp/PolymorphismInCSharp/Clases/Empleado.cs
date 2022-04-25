using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PolymorphismInCSharp.Clases
{
    class Empleado:Persona
    {
        string departamento, compañia;
        int salario;

        public string Departamento 
        {
            get => departamento;
            set
            {
                if (!string.IsNullOrEmpty(value) && !string.IsNullOrWhiteSpace(value) && value.Length <= 15)
                {
                    departamento = value;
                }
                else
                {
                    throw new Exception("Error");
                }
            }
        }
        public string Compañia 
        { 
            get => compañia;
            set
            {
                if (!string.IsNullOrEmpty(value) && !string.IsNullOrWhiteSpace(value) && value.Length <= 15)
                {
                    compañia = value;
                }
                else
                {
                    throw new Exception("Error");
                }
            }
        }
        public int Salario 
        { 
            get => salario;
            set
            {
                if (value>=0)
                {
                    salario = value;
                }
                else
                {
                    throw new Exception("Error");
                }
            }
        }

        public Empleado(string firsName, string lastName, string departamento, string compañia, int salario)
            :base(firsName, lastName)
        {
            Departamento = departamento;
            Compañia = compañia;
            Salario = salario;
        }

        public override string DisplayInfo()
        {
            string result = "";

            result += "Compañia: " + compañia + "\n";
            result += "Departamento: " + departamento + "\n";
            result += "Salario: " + salario + "\n";

            return base.DisplayInfo() + result;
        }
    }
}
