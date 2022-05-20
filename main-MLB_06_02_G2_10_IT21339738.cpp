#include <iostream>
#include "RecipeCategory.h"
#include "Recipe.h"
#include "Save.h"
#include "User"
#include "Donate.h"
#include "Ratings"
#include "Moderator.h"


int main() {
	
	// Object Creation
	
	RecipeCategory * lunch = new RecipeCategory();  // Object - RecipeCategory
	
	User *Registered_User1 = new Registered_User(); // Object - User
	
	User *Unregistered_User1 = new Unregistered_User(); // Object - RecipeCategory
	
	Moderator *Moderator1 = new Moderator(); // Object - 	Moderator
	
	Save*Save1 = new Save(); // Object - 	Save
	
	Ratings * Ratings1 = new Ratings(); // Object - Ratings
	
	Donate*Donate1 = new Donate(); // Object - Donate
	
	Report*Report1 = new Report(); // Object - Report
	
	Recipe *Recipes1 = new Recipe(); // Object - Recipe
	
	
	
	// Adding details to objects 
	
	
	RecipeCategory * dinner = new RecipeCategory("dinner","Dinner usually refers to what is in many Western cultures the largest and most formal meal of the day");
	
	Moderator *Moderator2 = new Moderator(1,"Ashan1","anupama1234","Ashan","Anupama",Registered_User1,Registered_User2);
	Moderator *Moderator3 = new Moderator(2,"Chamith12","Chmi2345","Chamith","Wijerathne",Registered_User1,Registered_User2);
	
	Recipe *Recipes2 = new Recipe(3,"Fried Rice","Best food for party",2000);
		
		
	
	
    // Calling Methods 	
	
	
	dinner-> AddItemRecipe(1,"Rice and curry","Good dinner for health",1200);    // Recipe catorory and recipe
	dinner-> AddItemRecipe(2,"kottu","best food for special event",200);
	dinner->DisplayRecipeCategoryDetails();
	
	Moderator1->AddRecipe(Recipes1,Recipes2);
	Recipes1->RecipeManageModerator(Moderator1,Moderator2);
	
	Registered_User*Registered_User2 = new Registered_User();
	
	Save*Save1 = new Save();
	Save->AddSaveDetails(Recipes1,Registered_User1);
	
	Ratings * Ratings2 = new Ratings();
	Recipes1->Addrates(Ratings1,Ratings2);
	
	Donate*Donate2 = new Donate();
	
	Report*Report2 = new Report();
	Report->GenerateDonateReport(Donate1,Donate2);
	
	
	// Delete Dynamic Objects
	
	delete lunch;
	delete Registered_User1;
	delete Unregistered_User1;
	delete Moderator1;
	delete Save1;
	delete Ratings1;
	delete Donate1;
	delete Report1;
	delete Recipes1;
	
	
	
	return 0;
}
