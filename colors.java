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

    private JPanel p1;

    frame() {

        this.setTitle("PLAY WITH COLORS");
        this.setSize(500, 500);

        b1 = new JButton("RED");
        b1.addActionListener(this);

        b2 = new JButton("BLUE");
        b2.addActionListener(this);

        b3 = new JButton("WHITE");
        b3.addActionListener(this);

        p1 = new JPanel();

        p1.add(b1);
        p1.add(b2);
        p1.add(b3);

        Container c = getContentPane();
        c.setLayout(new GridLayout(1, 1));
        c.add(p1);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String name = e.getActionCommand();
        if (b1.equals("RED")) {
            p1.setBackground(Color.red);
            
        }
        if (b2.equals("BLUE")) {
            p1.setBackground(Color.blue);
        }
        if (b3.equals("WHITE")) {
            p1.setBackground(Color.white);
        }
    }
}
