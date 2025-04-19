@class NSString, NSDateComponents, NSDate;

@interface HKWorkoutTrainingLoadCollectionQuery : HKQuery <HKWorkoutTrainingLoadCollectionQueryClientInterface>

@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) long long options;
@property (readonly, copy) NSDate *anchorDate;
@property (readonly, copy) NSDateComponents *intervalComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void).cxx_destruct;
- (void)client_deliverTrainingLoadCollection:(id)a0 forQuery:(id)a1;
- (id)initWithPredicate:(id)a0 options:(long long)a1 anchorDate:(id)a2 intervalComponents:(id)a3 completionHandler:(id /* block */)a4;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_validate;

@end
