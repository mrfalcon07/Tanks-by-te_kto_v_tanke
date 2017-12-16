#include "AbstructSciene.h"
#include "PhisicalSciene.h"

int main()
{
    RenderWindow window(VideoMode(500, 500), "hren znaet chto");
    const int first_id = 1;
    AbstructSciene as;
    RenderSciene rs(&as);
    PhisicalSciene ps(&as, &rs);
    as.add(first_id, "tank");
    rs.add(first_id, "tank");
    ps.add(first_id, "tank");
    Clock clock, clock1;
    double shoot_timer = 0;
    while(window.isOpen())
    {
        t = clock1.getElapsedTime().asMicroseconds();
        clock1.restart();
        t /= 800;
        if(clock.getElapsedTime().asSeconds() >= 1)
            shoot_timer = 0;
        Event event;
        while(window.pollEvent(event))
        {
            if(event.type == Event::Closed)
                window.close();
        }

        vector<const Action*> actions;
        if((Keyboard::isKeyPressed(Keyboard::Space)) && (shoot_timer == 0))
        {
            const Action* action = new Action(first_id, SHOOT);
            actions.push_back(action);
            shoot_timer = 1;
            clock.restart();
        }
        if(Keyboard::isKeyPressed(Keyboard::S))
        {
            const Action* action = new Action(first_id, DOWN);
            actions.push_back(action);
        }
        else if(Keyboard::isKeyPressed(Keyboard::W))
        {
            const Action* action = new Action(first_id, UP);
            actions.push_back(action);
        }
        else if(Keyboard::isKeyPressed(Keyboard::D))
        {
            const Action* action = new Action(first_id, RIGHT);
            actions.push_back(action);
        }
        else if(Keyboard::isKeyPressed(Keyboard::A))
        {
            const Action* action = new Action(first_id, LEFT);
            actions.push_back(action);
        }

        as.set_state(ps.calculate(actions));

        window.clear();
        rs.draw(window);
        window.display();
    }
    return 0;
}