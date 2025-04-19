@class RTDefaultsManager, NSMutableDictionary;

@interface RTPlaceInferenceDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)submit;
- (void)create;
- (id)getClientKeyForDailyMetrics:(int)a0;
- (id)getClientKeyForDefaultManager:(int)a0;
- (void)increaseCountForClientMappingIndex:(int)a0;
- (id)initWithDefaultsManager:(id)a0;
- (BOOL)shouldSubmit;

@end
