import java.io.*;

class Lab06 {

    public static void main(String[] args) {

        try {
            Class.forName("X");
        }
        catch (Exception e) {
            System.out.println("Class not found!");
        }

        try {
            DataInputStream d =
            new DataInputStream(
            new ByteArrayInputStream(new byte[]{1}));

            while (true)
                d.readInt();

        }
        catch (EOFException e) {
            System.out.println("End of file!");
        }
        catch (IOException e) {
        }
    }
}