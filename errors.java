package pkg005_eventimplementsactionListener;

import java.awt.Color;
import java.awt.Container;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class frame extends JFrame implements ActionListener {

    private JButton b1;
    private JButton b2;
    private JButton b3;
    private JButton b4;
    private JLabel l1;
    private JPanel p1;
   

    frame() {

        this.setTitle("Rupaul Draq Race");
        this.setSize(500, 500);

        b1 = new JButton("RED");
        b1.addActionListener(this);

        b2 = new JButton("BLUE");
        b2.addActionListener(this);

        b3 = new JButton("ORANGE");
        b3.addActionListener(this);

        b4 = new JButton("RESET");
        b4.addActionListener(this);

        l1 = new JLabel("Please choose your Color:");

        p1 = new JPanel();
        

        p1.add(l1);
        p1.add(b1);
        p1.add(b2);
        p1.add(b3);
        p1.add(b4);
        

        Container c = getContentPane();
        c.setLayout(new GridLayout(1, 1));
        c.add(p1);
        

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String name = e.getActionCommand();
        {
            if (b1.equals("RED"));
            {
                p1.setBackground(Color.RED);
                b1.addActionListener(this);

            }
            if (b2.equals("BLUE"));
            {
                p1.setBackground(Color.BLUE);
                b2.addActionListener(this);

            }
            if (b3.equals("ORANGE"));
            {
                p1.setBackground(Color.ORANGE);
                b3.addActionListener(this);

            }
            if (b4.equals("RESET"));
            {
                p1.setBackground(Color.PINK);
                b4.addActionListener(this);

            }
        }
    }
}
