package MainFiles;

public class MainClass {

    public MainClass() {
        // 400, 039, 777
        int last_prim = 3;

        if (last_prim < 3) {
            last_prim = 3;
        }
        else if (last_prim % 2 == 0) {
            last_prim++;
        }

        int num = last_prim;

        long timer = System.currentTimeMillis();

        boolean isRunning = true;

        while (isRunning) {
            num += 2;
            boolean is_prim = true;
            for (int idx = 3; idx <= Math.sqrt(num); idx++) {
                if (num % idx == 0) {
                    is_prim = false;
                    break;
                }
            }

            if (is_prim) {
                last_prim = num;
            }

            if (System.currentTimeMillis() - timer >= 30000) {
                System.out.println(last_prim);
                isRunning = false;
            }
        }
    }

    public static void main(String[] args) {
        new MainClass();
    }
}
