import java.util.*;
import java.io.*;

public class TestClass {

    private static class FastReader {
 
        private final InputStream stream;
        private final byte[] buf = new byte[1024];
        private int curChar;
        private int numChars;
        private SpaceCharFilter filter;
 
        public FastReader(InputStream stream) {
            this.stream = stream;
        }
 
        public int read() {
            if (numChars == -1) {
                throw new InputMismatchException();
            }
            if (curChar >= numChars) {
                try {
                    curChar = 0;
                    numChars = stream.read(buf);
                    if (numChars <= 0) {
                        return -1;
                    }
                } catch (IOException ex) {
                }
            }
            return buf[curChar++];
        }
 
        public String readString() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            StringBuilder res = new StringBuilder();
            do {
                res.appendCodePoint(c);
                c = read();
            } while (!isSpaceChar(c));
            return res.toString();
        }
 
        public String nextLine() {
            StringBuilder res = new StringBuilder();
            int c = read();
            while (c != '\n') {
                res.appendCodePoint(c);
                c = read();
            }
            return res.toString();
        }
 
        public boolean isSpaceChar(int c) {
            if (filter != null) {
                return filter.isSpaceChar(c);
            }
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
 
        public interface SpaceCharFilter {
 
            public boolean isSpaceChar(int ch);
        }
 
        public int nextInt() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            int res = 0;
            do {
                if (c < '0' || c > '9') {
                    throw new InputMismatchException();
                }
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }
 
        public long nextLong() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            long res = 0;
            do {
                if (c < '0' || c > '9') {
                    throw new InputMismatchException();
                }
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }
 
        public double nextDouble() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            double res = 0;
            while (!isSpaceChar(c) && c != '.') {
                if (c == 'e' || c == 'E') {
                    return res * Math.pow(10, nextInt());
                }
                if (c < '0' || c > '9') {
                    throw new InputMismatchException();
                }
                res *= 10;
                res += c - '0';
                c = read();
            }
            if (c == '.') {
                c = read();
                double m = 1;
                while (!isSpaceChar(c)) {
                    if (c == 'e' || c == 'E') {
                        return res * Math.pow(10, nextInt());
                    }
                    if (c < '0' || c > '9') {
                        throw new InputMismatchException();
                    }
                    m /= 10;
                    res += (c - '0') * m;
                    c = read();
                }
            }
            return res * sgn;
        }
 
        public String next() {
            return readString();
        }
 
        public char nextChar() {
            return readString().charAt(0);
        }
 
        public void close() {
            try {
                stream.close();
            } catch (IOException ex) {
            }
        }
 
    }





    public static void main(String[] args) throws IOException{

        FastReader sc=new FastReader(System.in);

        int q= sc.nectInt();
        for (int w = 1; w <= q; w++)
        {
            int n= sc.nectInt();
            String st = sc.next();

            String a = "1";
            String sum = "";
            if (st[0] == 1)
            {
                sum += "2";
            }
            else
            {
                sum += '1';
            }

            for (int i = 1; i < st.length(); i++)
            {
                char ch = st[i];
                if (ch == '0')
                {
                    if (sum[i - 1] != '1')
                    {
                        sum += "1";
                        a += "1";
                    }
                    else
                    {
                        sum += "0";
                        a += "0";
                    }
                }
                else
                {
                    if (sum[i - 1] != '1')
                    {
                        sum += "2";
                        a += "1";
                    }
                    else
                    {
                        sum += "1";
                        a += "0";
                    }
                }
            }
            cout << a << endl;
        }

      
    }




}