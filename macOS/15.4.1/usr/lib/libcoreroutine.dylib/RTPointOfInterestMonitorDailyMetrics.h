@class RTDefaultsManager, NSMutableDictionary;

@interface RTPointOfInterestMonitorDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)submit;
- (void)create;
- (void)increaseCountForKey:(id)a0;
- (id)initWithDefaultsManager:(id)a0;
- (BOOL)shouldSubmit;

@end
