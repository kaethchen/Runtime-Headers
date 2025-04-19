@class NSString;

@interface HKWorkoutTrainingLoadQuery : HKQuery <HKWorkoutTrainingLoadQueryClientInterface>

@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void).cxx_destruct;
- (void)client_deliverTrainingLoadResults:(id)a0 forQuery:(id)a1;
- (id)initWithPredicate:(id)a0 options:(long long)a1 completionHandler:(id /* block */)a2;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_validate;

@end
