#include <iostream>

using namespace std;

bool playerDead(int hp)
{
    if(hp > 0)
    {
        return false;
    }
    else{
        return true;
    }
}

void gameOverMaster()
{
    cout << "El Amo del juego aparece frente a ti. Su rostro, turbado, te dirige una mirada iracunda:\n " << endl;
    cout << "¿Tan dificil es seguir las instrucciones dadas? No mereces seguir en el juego..." << endl;
    cout << "Dirige su baculo hacia ti, y un rayo brillante te desarma en un monton de 0s y 1s" << endl;
}

int main()
{
    int vida = 100;
    int accion;

    cout << "Bienvenido al juego: Escape del Castillo" << endl;
    cout << "Elige las opciones correctas para obtener tu libertad... o muere en el intento" << endl;

    cout << "Despiertas sobre la cama de un cuarto desconocido. No tienes ningun recuerdo de donde estas. como llegaste ahi. O de ti mismo..." << endl;
    cout << "Te sientas y ves un haz de luz que entra en la habitacion. Ves una puerta frente a ti. Giras tu cabeza, y hay una mesita de noche con un libro sucio. el colchon de la cama se siente muy comoda..\n\n" << endl;

    cout << "Elige sabiamente entre las opciones:\n" << endl;
    cout << "1) Corres desesperadamente a la puerta" << endl;
    cout << "2) Estiras con gran esfuerzo el brazo para tomar el libro" << endl;
    cout << "3) Decides recostarte nuevamente sobre la cama" << endl;
    cin >> accion;
    cout << "\n\n" << endl;
    switch(accion)
    {
        case 1:
            cout << "No te das cuentas, pero frente a la puerta habia un charco de agua. Resbalas hacia atras. Tus heridas no son mortales, pero quedas gravemente herido" << endl;
            cout << "Volteas hacia atras, y ves que dentro del libro que ignoraste hay una llave" << endl;
            cout << "Tomas la llave, rodeas el charo y usas la llave para salir de la habitacion \n\n" << endl;
            vida = vida - 20;
            break;
        case 2:
            cout << "Tomas el libro, y ves que cae algo. Te levantas a recogerlo. Es una llave, probablemente de la puerta." << endl;
            cout << "Desde donde estas, la luz permite ver un charco de agua en el piso frente a la puerta. Lo rodeas con facilidad. Usas la llave para salir de la habitacion...\n" << endl;
            break;
        case 3:
            cout << "Te coloacs sobre la cama. Es suave y reconfortante... demasiado reconfortante. No despertaras nunca, y tu cuerpo cedera a la falta de agua y alimento..." << endl;
            vida = 0;
            break;
        default:
            gameOverMaster();
            vida = 0;
            break;
    }
    
    if(playerDead(vida) == true)
    {
        cout << "Has muerto" << endl;
        cout << "Juego Terminado" << endl;
        return 0;
    }

    cout << "Sales a un gran pasillo empedrado. A tu derecha, ves una escalera de caracol descendente junto a una gran ventana. A tu izquierda, un pasillo obscuro, del cual surgen voces aguerridas." << endl;
    cout << "Las escaleras son muy pequeñas e inclinadas. La ventana parece un camino mas rapido para descender de ahi. Tal vez, demasiado rapido..." << endl;
    cout << "Podrias intentar escapar, o confrontar a tus captores...\n\n" << endl;
    cout << "Elige sabiamente entre las opciones:\n" << endl;
    cout << "1) Sigues por el largo pasillo  hacia la derecha." << endl;
    cout << "2) Desciendes corriendo por la escalera de caracol" << endl;
    cout << "3) Corres a la derecha y confrontas valientemente a tus captores" << endl;
    cout << "4) Te lanzas con bravura por la ventana" << endl;

    cin >> accion;
    cout << "\n\n" << endl;

    switch(accion)
    {
        case 1:
            cout << "Corres con todas tus fuerzas, tratando de evitar que el grupo que esuchaste no se entere que estas escapando." << endl;
            cout << "Te encuentras con unas grandes escaleras. Bajas con cuidado. Logras llegar, cansado, hasta el ultimo escalon." << endl;
            break;
        case 2: 
            cout << "Bajas las escaleras a toda velocidad. Pero sufres un accidente y ruedas por las escaleras, lastimandote" << endl;
            vida = vida - 30; 
            break;
        case 3: 
            cout << "¿Recuerdas el momento en el que recogiste la Gran Espada del Destino que derrota a cualquier rival y vuelve a su portador invencible?" << endl;
            cout << "Yo tampoco." << endl;
            cout << "Fuiste masacrado salvajemente por un grupo de orcos." << endl;
            cout << "No se que esperabas..." << endl;
            vida = 0;
            break;
        case 4:
            cout << "Te diriges a la ventana y te arrojas por ella. Afortunadamente, en el fondo, hay una carreta con paja, que suaviza tu caida." << endl;
            cout << "Si fueras un Asesino, probablemente no te pasaria nada. Pero como eres una persona comun, te hieres gravemente" << endl;
            vida = vida - 60;
            break;
        default:
            gameOverMaster();
            vida = 0;
            break;
    }

    if(playerDead(vida) == true)
    {
        cout << "Has muerto" << endl;
        cout << "Juego Terminado" << endl;
        return 0;
    }

    cout << "Llegas al Patio Central. Te das cuenta que la puerta esta abierta. La salida a tu libertad esta muy cerca" << endl;
    cout << "Detras de ti, escuchas a un grupo de Orcos que te señalan, amenazandote y persiguiendote. Todos estan armados." << endl;
    cout << "Volteas a tu alrededor. Hay varios barriles con polvora. Podrias usarlos como una ventaja" << endl;
    cout << "Tambien ves un establo con un caballo. Probablemente sea de alguno de los orcos. Podrias intentar escapar en el.\n\n" << endl;

    cout << "Elige sabiamente:\n" << endl; 
    cout << "1) Corres a toda velocidad hacia la gran puerta abierta que sale hacia el castillo" << endl;
    cout << "2) Montas el caballo y huyes." << endl;
    cout << "3) Retornas a controntar a los Orcos" << endl;
    cout << "4) Tomas una antorcha encendida qu estaba en la pared y te diriges hacia el los barriles de polvora." << endl;
    cin >> accion;
    cout << "\n\n" << endl;
    
    switch(accion)
    {
        case 1:
            cout << "Corres hacia la puerta abierta con todas tus fuerzas. El camino es recto. Corres, y corres... y una flecha te pega en la rodilla." << endl;
            vida = vida - 50;
            if(playerDead(vida) == false)
            {
                cout << "Mal herido, te arrastras por el suelo hasta alejarte del alcance de tus captores." << endl;
            }
            break;
        case 2:
            cout << "Tomas las riendas del caballo, lo montas, y sales del castillo a toda velocidad." << endl;
            cout << "Escuchas las flechas de los orcos volar y aterrizar detras de ti" << endl;
            cout << "Estas a punto de escapar, pero uno de los Orcos silba y el caballo se frena subitamente." << endl;
            cout << "Tu cuerpo vuela por los aires, haciendote caer e hiriendote de gravedad." << endl;
            vida = vida - 70;
            
            if(playerDead(vida) == false)
            {
                cout << "Mal herido, te arrastras por el suelo hasta alejarte del alcance de tus captores." << endl;
            }
            break;
        case 3: 
            cout << "Tras desenvainar tu Gran Espada Maestra del Heroe Elegido Invencible, la levantas en el aire y diriges a tus tropas para combatir a los malignos Orcos secuestradores." << endl;
            cout << "Excepto que no tienes una Gran Espada Maestra, ni tropas. Por lo cual, los Orcos te asesinan salvajemente." << endl;
            vida = 0;
            break;
        case 4:
            cout <<"Sin pensarlo, tomas la antorcha que se encuentra a tu alcance y corres hacia los barriles de polvora." << endl;
            cout << "Los Orcos se acercan, te ven... y se detienen asustados." << endl;            
            cout << "Gritas amenazadoramente que si no te dejan en en libertad, dejaras caer el fuego sobre la polvora y todos moriran." << endl;
            cout << "Uno de los orcos trata de atacarte con su arco y flecha, pero el que parece ser el Lider le corta la cabeza de un tajo" << endl;
            cout << "El resto de los orcos se confrontan, lo que da a lugar a un gran enfrentamiento. Mientras ellos te ignoran, aprovechas para huir de castillo sinque te vean" << endl;
            break;
        default:
            gameOverMaster();
            vida = 0;
            break;
    }

    if(playerDead(vida) == true)
    {
        cout << "Has muerto" << endl;
        cout << "Juego Terminado" << endl;
        return 0;
    }

    cout << "\n\n" << endl;
    cout << "Has escapado del castillo. A la distancia, ves a un Jinete que se acerca" << endl;

    if (vida == 100)
    {   
        cout << "¿Pediras auxilio al Jinete Misterioso?" << endl;
        cout << "1) Si" << endl;
        cin >> accion;
        cout << "\n\n" << endl;

        if(accion == 1)
        {
            cout << "Llamas al Jinete Misterioso. Algo dentro de ti te dice que te vas a arrepentir de ello..." << endl;
            cout << "Al acercarse en su corcel, puedes notar que es una hermosa mujer la que viene hacia ti. Tal vez no sea tan malo despues de todo" << endl;
            cout << "La Jinete se te acerca y te dice:" << endl;
            cout << "- Con que aqui estas. No puedo creer que hayas salido de ahi por tu cuenta. Parece que no eres tan tonto como yo pensaba." << endl;
            cout << "Parece que te conoce, yesta enfadada contigo" << endl;
            cout << "Antes de que puedas responder a sus ofensas, te lanza una botella que capturas en el aire instintivamente." << endl; 
            cout << "- Toma esto.\n\n" << endl;
            cout << "¿Que haras? Es tu ultima decision. Elige sabiamente:\n" << endl;
            cout << "1) Tomas el liquido de la botella" << endl;
            cout << "2) Rompes la botella en el suelo" << endl;
            cout << "3) Atacas a la jinete Misteriosa" << endl;
            cout << "4) Huyes por tu vida" << endl;
            cin >> accion;
            cout << "\n - ¡Olvidalo! - grita enojada la mujer, mientras desmonta su caballo" << endl;
            cout << "Te toma por la camisa, te arroja al suelo, y te forza a beber el liquido" << endl;
            cout << "- ¿Ya estas recordando estupido? Por andar bebiendo de los frascos de mi nuestro padre, tomaste una pocima amnesica, y de fuiste a beber." << endl;
            cout << "- Y aunque no tienes memoria, sigues siendo idiota, tuviste que ir a apostar con tus amigos del bar que podias entrar y salir al castillo de los Orcos sin que te vieran" << endl;
            cout << "- Nuestro padre y yo estuvimos buscando los ingredientes toda la noche, y llevo varias horas planendo como rescatarte. Afortunadamente, me ahorraste el trabajo" << endl;
            cout << "Tu hermana monta nuevamente a su corcel, y apenas volteando hacia atras, te dirige unas ultimas palabras:" << endl;
            cout << "- Vuelve a casa. Ya sabes como hacerlo\n" << endl;
            cout << "Y galopa hacia la lejania, sin detenerse por un segundo." << endl;
            cout <<"Sera un largo retorno a casa" << endl;

            cout <<"Juego Terminado" << endl;
            return 0;
            
        }else
        {
            cout << "Tus heridas no te permiten moverte para encontrarte con el Misteriosos Jinete, quien cabalga hacia el horizonte." << endl;
            cout << "Ves un humo a lo lejos, y te diriges hacia el." << endl;
            cout << "Descubres que es un pueblo cercano. Los Aldeanos te reciben amablemente." << endl;
            cout << "Pasas el resto de tus dias viviendo como lugareño mas." << endl;
            cout << "Nunca recuperas tus recuerdos.\n\n" << endl;
            cout << "Juego Terminado" << endl;
            return 0;
        }
        
        return 0;
    }
    
    if (vida <= 20)
    {
        cout << "Pero tus heridas son demasiado graves, y no te permiten moverte. De hecho, la vista te pesa cada vez mas y mas" << endl;
        cout << "Has podido salir del castillo, pero no podras sobrevivir el tiempo suficiente para narra tu aventura\n\n";
        cout << "Has muerto" << endl;
        cout << "Juego Terminado" << endl;
        return 0;
    }

    if (vida <= 50)
    {
        cout << "Tus heridas no te permiten moverte para encontrarte con el Misteriosos Jinete, quien cabalga hacia el horizonte." << endl;
        cout << "Ves un humo a lo lejos, y te diriges hacia el." << endl;
        cout << "Descubres que es un pueblo cercano. Los Aldeanos te reciben amablemente, y sanan tus heridas." << endl;
        cout << "Pero no logras recuperarte del todo, y vives el resto de tus dias mendingando por las calles." << endl;
        cout << "Nunca recuperas tus recuerdos.\n\n" << endl;
        cout << "Juego Terminado" << endl;
        return 0;
    }

    if(vida <= 90)
    {
        cout << "Tus heridas no te permiten moverte para encontrarte con el Misteriosos Jinete, quien cabalga hacia el horizonte." << endl;
        cout << "Ves un humo a lo lejos, y te diriges hacia el." << endl;
        cout << "Descubres que es un pueblo cercano. Los Aldeanos te reciben amablemente, y sanan tus heridas." << endl;
        cout << "Logras recuperarte de tus heridas, y pasas el resto de tus dias viviendo como lugareño mas." << endl;
        cout << "Nunca logras recuperar tus recuerdos.\n\n" << endl;
        cout << "Has muerto" << endl;
        cout << "Juego Terminado" << endl;
        return 0;
    }

    return 0;
}