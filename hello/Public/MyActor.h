#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class HELLO_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyActor();

protected:
	virtual void BeginPlay() override;

private:

	int32 x;
	int32 y;

	int32 Step();
	void move();

};
