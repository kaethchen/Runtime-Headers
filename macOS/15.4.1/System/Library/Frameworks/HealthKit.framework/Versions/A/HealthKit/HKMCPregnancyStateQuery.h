@interface HKMCPregnancyStateQuery : HKQuery {
    id /* block */ _updateHandler;
}

@property (readonly, nonatomic) BOOL isRunningForMaintenance;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)client_deliverPregnancyModel:(id)a0 queryUUID:(id)a1;
- (id)initWithIsRunningForMaintenance:(BOOL)a0 updateHandler:(id /* block */)a1;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
