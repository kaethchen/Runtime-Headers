@class NSSet, NSArray, NSDictionary, NSMapTable, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WFActionRegistry : NSObject <WFActionProviderDelegate>

@property (readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;
@property (nonatomic) unsigned long long client;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheUpdateAndFillQueue;
@property (readonly, nonatomic) NSArray *actionProvidersForFilling;
@property (readonly, nonatomic) NSArray *actionProvidersForLoading;
@property (readonly, nonatomic) NSDictionary *actionsByIdentifier;
@property (readonly, nonatomic) NSMapTable *actionsByActionProvider;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRegistry;
+ (id)toolKitRegistry;
+ (id)supportedContentItemClassesForContentSelection;

- (void).cxx_destruct;
- (id)initWithClient:(unsigned long long)a0;
- (void)fill;
- (id)createActionWithIdentifier:(id)a0 serializedParameters:(id)a1;
- (id)createActionWithShortcut:(id)a0 error:(id *)a1;
- (void)actionProviderDidChange:(id)a0 updatedActions:(id)a1 removedActions:(id)a2 addedActions:(id)a3;
- (id)actionsForAppWithIdentifier:(id)a0;
- (void)addActions:(id)a0 fromActionProvider:(id)a1;
- (id)createActionForSelectingContentOfType:(Class)a0 serializedParameters:(id)a1;
- (id)createActionWithDonation:(id)a0;
- (id)createActionWithIdentifier:(id)a0 serializedParameters:(id)a1 forceLocalActionsOnly:(BOOL)a2;
- (id)createActionsForSelectingContentOfTypes:(id)a0 serializedParameterArray:(id)a1;
- (id)createActionsWithIdentifiers:(id)a0 serializedParameterArray:(id)a1;
- (id)createActionsWithIdentifiers:(id)a0 serializedParameterArray:(id)a1 forceLocalActionsOnly:(BOOL)a2;
- (id)defaultSerializedParametersForActionSelectingContentOfType:(Class)a0;
- (void)fillActionProviders:(id)a0;
- (id)placeholderForActionIdentifier:(id)a0 serializedParameters:(id)a1;
- (void)removeActionsWithIdentifiers:(id)a0 fromActionProvider:(id)a1;
- (id)replacementActionForActionIdentifier:(id)a0 serializedParameters:(id)a1;
- (id)replacementActionForDonatedIntent:(id)a0;
- (id)residentCompatibleActionsForHome:(id)a0;
- (id)residentCompatibleActionsFromActions:(id)a0 inHome:(id)a1;
- (void)setActions:(id)a0 forProvider:(id)a1;
- (id)suggestionsForHome:(id)a0 includingRelatedActions:(BOOL)a1;
- (id)updatedActionForResidentCompatibility:(id)a0 inHome:(id)a1;

@end
