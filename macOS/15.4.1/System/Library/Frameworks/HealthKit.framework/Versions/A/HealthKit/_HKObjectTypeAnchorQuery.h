@class NSString;

@interface _HKObjectTypeAnchorQuery : HKQuery <_HKObjectTypeAnchorQueryClientInterface> {
    id /* block */ _updateHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)client_deliverAnchor:(id)a0 query:(id)a1;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;

@end
