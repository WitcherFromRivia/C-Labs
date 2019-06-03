using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ConsoleApplication3;

namespace ConsoleApplication3
{
    class chet
    {
        t a, b, c, d;
        protected double ab, bc, cd, da;
        private int x;
        private int y;

        protected struct t
        {
            public int x, y;
        }

        #region koordinati
        public chet()
        {
            Console.WriteLine("координаты а");
            a.x = Convert.ToInt32(Console.ReadLine());
            a.y = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("координаты b");
            b.x = Convert.ToInt32(Console.ReadLine());
            b.y = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("координаты c");
            c.x = Convert.ToInt32(Console.ReadLine());
            c.y = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("координаты d");
            d.x = Convert.ToInt32(Console.ReadLine());
            d.y = Convert.ToInt32(Console.ReadLine());
            ab = dlina(a, b);
            bc = dlina(c, b);
            cd = dlina(c, d);
            da = dlina(d, a);
            #endregion}
            double dlina(t n, t m)
            {
                Console.WriteLine("nx - " + n.x + "mx - " + m.x + "ny - " + n.y + "my - " + m.y);
                return Math.Sqrt(Math.Pow(n.x - m.x, 2) + Math.Pow(n.y - m.y, 2));
            }
            double perimetr()
            { return Math.Round((ab + bc + cd + da), 2); }
            double ploshad()
            { return Math.Round((ab * bc), 2); }
        }

        internal double perimetr()
        {
            throw new NotImplementedException();
        }

        internal string ploshad()
        {
            throw new NotImplementedException();
        }
    }

    class romb : chet
    {

        public romb() : base()
        {
            Console.WriteLine("Длины сторон ромба: ab =" + Math.Round(ab, 2) + "; bc = " + Math.Round(bc, 2) + "; cd = " + Math.Round(cd, 2) + "; da = " + Math.Round(da, 2) + ";");
            if (ab == bc && cd == da && bc == cd)
            {
                Console.WriteLine("это ромб");
            }
            else { Console.WriteLine("это не ромб"); }
        }

        internal void isRomb()
        {
            throw new NotImplementedException();
        }

        
        protected double ab, bc, cd, da;

        static void Main(string[] args)
        {     double ab, bc, cd, da;

            double perimetr()
            { return Math.Round((ab + bc + cd + da), 2); }
            double ploshad()
            { return Math.Round((ab * bc), 2); }
            int n, m;
            Console.Write("Введи число четырехугольников -");
            n = Convert.ToInt32(Console.ReadLine());
            chet[] m1 = new chet[n];
            for (int i = 0; i < n; i++)
            {
                m1[i] = new chet();
                Console.WriteLine("Периметр -" + m1[i].perimetr());
                Console.WriteLine("Площадь -" + m1[i].ploshad());
            }
            double minper = m1[0].perimetr();
            for (int i = 0; i < n; i++)
            {
                if (minper > m1[i].perimetr())
                    minper = m1[i].perimetr();
                Console.WriteLine("Минимальный периметр - " + minper);
            }
            Console.Write("Введи число ромбов - ");
            m = Convert.ToInt32(Console.ReadLine());
            romb[] m2 = new romb[m];
            double sum = 0;
            for (int i = 0; i < n; i++)
            {
                m2[i] = new romb();
                m2[i].isRomb();
                Console.WriteLine("Периметр -" + m2[i].perimetr());
                Console.WriteLine("Площадь -" + m2[i].ploshad());
                sum += m2[i].ploshad();
            }
            Console.WriteLine("Средняя площадь" + (sum / m));
            Console.ReadLine();
        }

        private double ploshad()
        {
            throw new NotImplementedException();
        }
    }
}
       
    
               