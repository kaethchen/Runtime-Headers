@class NSString, NSObject;
@protocol DNDSSleepingTriggerManagerDataSource, OS_dispatch_queue, DNDSAutomationManagerDataSource;

@interface DNDSSleepingTriggerManager : NSObject <DNDSAutomationManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
}

@property (weak, nonatomic) id<DNDSSleepingTriggerManagerDataSource, DNDSAutomationManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)refresh;

@end
