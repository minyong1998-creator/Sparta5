#include "MyActor.h"
#include "Math/UnrealMathUtility.h"


AMyActor::AMyActor()
{
	x = 0;
	y = 0;
}



void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
	move();
	
}

int AMyActor::Step()
{
	return FMath::RandRange(0, 1);

}

void AMyActor::move()
{
	for (int i = 0; i < 10; i++)
	{
		int step = Step();

		if (step == 0)
		{
			x = x + 1;
		}
		else
		{
			y = y + 1;
		
		}

		UE_LOG(LogTemp, Warning, TEXT("x: %d, y: %d"), x, y);

	}
	
}
