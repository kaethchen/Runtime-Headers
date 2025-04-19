@class NSSet;

@interface WFBundledActionProvider : WFActionProvider

@property (readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;

- (id)actionDefinitionsWithIdentifiers:(id)a0;
- (id)availableActionIdentifiers;
- (id)createActionWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 fallbackToMissing:(BOOL)a3 isForLocalization:(BOOL)a4;
- (void)createActionsForRequests:(id)a0 forceLocalActionsOnly:(BOOL)a1;
- (id)createAllAvailableActions;
- (id)createAllAvailableActionsForLocalization;
- (id)createAllAvailableActionsIncludingMissingActions:(BOOL)a0;

@end
