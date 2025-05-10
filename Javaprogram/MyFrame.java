import java.awt.*;  
import java.awt.event.*;  

// Creating a Frame using AWT
class MyFrame extends Frame implements ActionListener {  
    Button b;  

    MyFrame() {  
        // Set frame title
        setTitle("AWT Example"); 

        // Create button
        b = new Button("Click Me");  
        b.setBounds(50, 100, 80, 30);  
        
        // Adding event listener to the button
        b.addActionListener(this);  

        // Adding button to frame
        add(b);  
        
        // Set frame properties
        setSize(300, 200);  
        setLayout(null);  
        setVisible(true);  
    }  

    // Event Handling
    public void actionPerformed(ActionEvent e) {  
        b.setLabel("Clicked!");  
    }  

    // Main method to run GUI
    public static void main(String args[]) {  
        new MyFrame();  
    }  
}
