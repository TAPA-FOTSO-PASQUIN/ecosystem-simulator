#define SDL_MAIN_USE_CALLBACKS 0 // Utiliser la méthode standard main
#include "Core/GameEngine.h"
#include <iostream>
#include <SDL3/SDL.h>

int main(int argc, char* argv[]) {
    std::cout << "🎮 Démarrage du Simulateur d'Écosystème" << std::endl;
    std::cout << "=======================================" << std::endl;

    // Création du moteur (Largeur, Hauteur)
    Ecosystem::Core::GameEngine engine("Simulateur Écosystème v1.0", 1024.0f, 868.0f);

    if (!engine.Initialize()) {
        std::cerr << "❌ Erreur critique : Impossible d'initialiser le moteur." << std::endl;
        return -1;
    }

    // La boucle principale est gérée ici
    engine.Run();

    engine.Shutdown();
    std::cout << "👋 Simulation terminée." << std::endl;
    
    return 0;
}