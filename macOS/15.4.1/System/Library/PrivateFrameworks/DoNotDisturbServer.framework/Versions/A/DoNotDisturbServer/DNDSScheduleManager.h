@class NSMutableDictionary, DNDSModeAssertionManager;
@protocol DNDSScheduleManagerDataSource;

@interface DNDSScheduleManager : NSObject {
    DNDSModeAssertionManager *_modeAssertionManager;
    NSMutableDictionary *_currentScheduleSettingsByModeIdentifier;
}

@property (weak, nonatomic) id<DNDSScheduleManagerDataSource> dataSource;

- (void).cxx_destruct;
- (void)refresh;
- (void)_refreshWithScheduleSettings:(id)a0 modeIdentifier:(id)a1 currentScheduleAssertion:(id)a2 context:(id)a3;
- (void)_refreshWithScheduleSettingsByModeIdentifier:(id)a0 context:(id)a1;
- (id)_scheduleManagerClientIdentifierForModeIdentifier:(id)a0;
- (id)initWithModeAssertionManager:(id)a0;

@end
