#include <raylib.h>

const int screenWidth = 850;
const int screenHeight = 450;
   

int main()
{
SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT);
    InitWindow(screenWidth, screenHeight, "boob");
    if (IsWindowResized() && !IsWindowFullscreen())
        {
            
        }

        
 		
            if (IsWindowFullscreen())
            {
                
            GetScreenWidth();
            GetScreenHeight();
                // if we are full screen, then go back to the windowed size
                SetWindowSize(screenWidth, screenHeight);
                
                 // toggle the state
 			ToggleFullscreen();
            }
            
        
 
           
    
SetTargetFPS(144);    
     Rectangle rec1 = {(float)screenWidth/3, (float)screenHeight/3,(float)40,(float)40};
     Rectangle rec2 = {(float)screenWidth/9, (float)screenHeight/9,(float)40,(float)40};
     Rectangle rec3 = {(float)screenWidth/13, (float)screenHeight/13,(float)40,(float)40};
    //--------------------------------------------------------------------------------------
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {     

        if(rec1.x < 0){rec1.x = 0;}
        if(rec1.x > GetScreenWidth()-rec1.width){rec1.x = GetScreenWidth()-rec1.width;}
        if(rec1.y < 0){rec1.y = 0;}
        if(rec1.y > GetScreenHeight()-rec1.height){rec1.y = GetScreenHeight()-rec1.height;}
         
        if(rec2.x < 0){rec2.x = 0;}
        if(rec2.x > GetScreenWidth()-rec2.width){rec2.x = GetScreenWidth()-rec2.width;}
        if(rec2.y < 0){rec2.y = 0;}
        if(rec2.y > GetScreenHeight()-rec2.height){rec2.y = GetScreenHeight()-rec2.height;}

           DrawText("CATCH!", 375, GetScreenHeight(), GetScreenWidth(), WHITE);
            DrawRectangleRec( rec1,RED);
            if (IsKeyDown(KEY_W)) rec1.y -= 4.0f;
            if (IsKeyDown(KEY_D)) rec1.x += 4.0f;
            if (IsKeyDown(KEY_A)) rec1.x -= 4.0f;
            if (IsKeyDown(KEY_S)) rec1.y += 4.0f;
          
            DrawRectangleRec(rec2,BLUE); 
            if (IsKeyDown(KEY_UP)) rec2.y -= 4.0f;
            if (IsKeyDown(KEY_RIGHT)) rec2.x += 4.0f;
            if (IsKeyDown(KEY_LEFT)) rec2.x -= 4.0f;
            if (IsKeyDown(KEY_DOWN)) rec2.y += 4.0f;
            
            ClearBackground(BLACK);
            DrawFPS(10,10);
           
        if(CheckCollisionRecs(rec1, rec2) == true){
        ClearBackground(WHITE);
    

         }EndDrawing();
    }

}


