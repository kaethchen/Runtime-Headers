@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DNDSSmartTriggerManagerDataSource, DNDSAutomationManagerDataSource;

@interface DNDSSmartTriggerManager : NSObject <DNDSAutomationManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
}

@property (weak, nonatomic) id<DNDSSmartTriggerManagerDataSource, DNDSAutomationManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)refresh;
- (void)_configureSmartTriggerWithSupportedModes:(id)a0;
- (void)_refreshIfNeccessaryForEvent:(id)a0;
- (void)_refreshWithSupportedModes:(id)a0 event:(id)a1;

@end
