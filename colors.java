package pkg005_eventimplementsactionListener;

import java.awt.Color;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class frame extends JFrame {

    private JButton b1;
    private JButton b2;
    private JButton b3;
    private JButton b4;
    private JLabel l1;
    private JPanel p1;
    private JPanel p2;

    frame() {

        this.setTitle("Play with Colors");
        this.setSize(500, 500);

        p1 = new JPanel();
        p2 = new JPanel();

        l1 = new JLabel("Please choose your Color:");
        b1 = new JButton("RED");
        b2 = new JButton("BLUE");
        b3 = new JButton("ORANGE");
        b4 = new JButton("RESET");

        p2.add(b1);
        p2.add(b2);
        p2.add(b3);
        p2.add(b4);
        p1.add(l1);

        if (b1.equals("RED")) {

            p1.setBackground(Color.red);

        } else if (b2.equals("BLUE")) {

            p1.setBackground(Color.blue);

        } else if (b3.equals("ORANGE")) {

            p1.setBackground(Color.orange);

        } else if (b4.equals("RESET")) {

            p1.setBackground(Color.pink);

        }
    }

}
