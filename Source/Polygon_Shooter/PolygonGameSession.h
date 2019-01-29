// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "PolygonGameSession.generated.h"

/**
 * 
 */
UCLASS()
class POLYGON_SHOOTER_API APolygonGameSession : public AGameSession
{
	GENERATED_BODY()

	virtual void RegisterServer() override;

};
