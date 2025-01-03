public class Strcomp {

	public static void main(String args[]) {
		String word = "a Hello\nWorld" + 
                              "Foo";
		System.out.println(word);
		char[] c = word.toCharArray();
		System.out.println(word.length());
	
		for(int i = 0; i < c.length; i++) {
			if(c[i] == ' '){
				System.out.println("Found space");	
			}
		}
	}
}
