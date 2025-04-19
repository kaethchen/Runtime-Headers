@class NSString;
@protocol DNDSHearingTestTriggerManagerDataSource, DNDSAutomationManagerDataSource;

@interface DNDSHearingTestTriggerManager : NSObject <DNDSAutomationManager>

@property (weak, nonatomic) id<DNDSHearingTestTriggerManagerDataSource, DNDSAutomationManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)refresh;
- (void)refreshWithEvent:(id)a0;

@end
