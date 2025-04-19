@class RTDefaultsManager, NSMutableArray;

@interface RTDailyTrainingSessionCounter : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableArray *metrics;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)compoundKeyForMode:(unsigned long long)a0 reason:(unsigned long long)a1;
- (void)createMetrics;
- (void)increaseCountForMode:(unsigned long long)a0 reason:(unsigned long long)a1;
- (id)initWithDefaultsManager:(id)a0;
- (id)modeAndReasonFromCompoundKey:(id)a0;
- (BOOL)shouldSubmitMetrics;
- (void)submitMetrics;

@end
