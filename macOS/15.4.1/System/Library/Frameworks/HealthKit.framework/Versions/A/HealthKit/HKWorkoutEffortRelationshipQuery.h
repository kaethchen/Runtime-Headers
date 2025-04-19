@class NSString, HKQueryAnchor, NSMutableArray;

@interface HKWorkoutEffortRelationshipQuery : HKQuery <HKWorkoutEffortRelationshipQueryClientInterface> {
    NSMutableArray *_relationshipsPendingDelivery;
}

@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) long long options;
@property (copy, nonatomic) id /* block */ resultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void).cxx_destruct;
- (void)client_deliverWorkoutEffortRelationships:(id)a0 isFinalBatch:(BOOL)a1 anchor:(id)a2 forQuery:(id)a3;
- (id)initWithPredicate:(id)a0 anchor:(id)a1 options:(long long)a2 resultsHandler:(id /* block */)a3;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
