@class GKContactsIntegrationIDSUpdateIntervalState, GKContactsIntegrationControllerSettings, GKContactsIntegrationCohortState;

@interface GKContactsIntegrationState : GKInternalRepresentation

@property (readonly, nonatomic) GKContactsIntegrationCohortState *cohortState;
@property (readonly, nonatomic) unsigned long long controllerState;
@property (readonly, nonatomic) GKContactsIntegrationIDSUpdateIntervalState *idsUpdateIntervalState;
@property (readonly, nonatomic) GKContactsIntegrationControllerSettings *settings;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initCohortStates:(id)a0 controllerState:(unsigned long long)a1 idsUpdateIntervalState:(id)a2 settings:(id)a3;

@end
