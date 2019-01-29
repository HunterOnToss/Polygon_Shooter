// Fill out your copyright notice in the Description page of Project Settings.

#include "PolygonGameSession.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"

void APolygonGameSession::RegisterServer()
{
	
	IOnlineSubsystem* OnlineSubSystem = IOnlineSubsystem::Get();

	IOnlineSessionPtr Session = OnlineSubSystem->GetSessionInterface();

	FOnlineSessionSettings Settings;

	Settings.bIsDedicated = true;
	Settings.bIsLANMatch = true;
	Settings.bAllowJoinInProgress = true;
	Settings.bShouldAdvertise = true;
	Settings.NumPublicConnections = 32;
	Settings.bUsesPresence = true;


	Session->CreateSession(0, GameSessionName, Settings);
	UE_LOG(LogTemp, Log, TEXT(">>>>>>>>>>>    Session CREATED <<<<<<<<<<<<<<<<"));
}
