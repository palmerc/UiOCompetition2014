public class Largest {
    public static int largestNumberInBothLists(int[] a, int[] b) {
        for (int i=0; i < a.length; i++) {
            if (binarySearch(b, a[i]) >= 0) {
                return a[i];
            }
        }
        return -1;
    }

    public static int binarySearch(int[] array, int key) {
        int position;
        int lowerbound = 0;
        int upperbound = array.length - 1;
        position = (lowerbound + upperbound) / 2;

        while ((array[position] != key) && (lowerbound <= upperbound)) {
            if (array[position] < key) {
                upperbound = position - 1;
            } else {
                lowerbound = position + 1;    // Else, increase position by one.
            }
            position = (lowerbound + upperbound) / 2;
        }
        return position;
    }

    public static void main(String [] args) {
        int[] a = { 100, 99, 0 };
        int[] b = { 100, 50, 0 };
        int answer = largestNumberInBothLists(a, b);
        System.out.println("Answer: " + answer);
    }
}
