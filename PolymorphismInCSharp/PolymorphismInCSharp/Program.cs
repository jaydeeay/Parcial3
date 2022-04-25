using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using PolymorphismInCSharp.Clases;

namespace PolymorphismInCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                Persona persona = new Persona("Jack", "Tyson");
                Console.WriteLine(persona.DisplayInfo());
                persona = persona.Destroy();

                Empleado empleado = new Empleado("Samuel", "Morales", "Humanidades", "Apple", 1000);
                Console.WriteLine(empleado.DisplayInfo());
                empleado = (Empleado)empleado.Destroy();
            }
            catch (Exception error)
            {
                throw new Exception("Error en ejecucion " + error);
            }
            finally
            {
                Console.ReadKey();
            }
        }
    }
}
