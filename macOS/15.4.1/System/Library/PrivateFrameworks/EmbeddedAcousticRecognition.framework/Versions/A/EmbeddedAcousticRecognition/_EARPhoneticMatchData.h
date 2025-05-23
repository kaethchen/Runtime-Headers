@interface _EARPhoneticMatchData : NSObject

@property (readonly, nonatomic) struct shared_ptr<quasar::DataFeed> { struct DataFeed *__ptr_; struct __shared_weak_count *__cntrl_; } dataFeed;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)roomForMoreData;
- (void)addOsym;
- (void)normalizePriors;
- (BOOL)appendData:(id)a0 prior:(float)a1;
- (void)applyRegexEnumerations;
- (int)convertFeedType:(long long)a0;
- (void)expDecayPriors;
- (int)getLimit;
- (id)initWithFeedType:(long long)a0 jsonConfigFile:(id)a1;
- (void)powerScalePriors;
- (void)sortItemsByPriorAsc;
- (void)sortItemsByPriorDesc;
- (void)writeTsv:(id)a0;

@end
