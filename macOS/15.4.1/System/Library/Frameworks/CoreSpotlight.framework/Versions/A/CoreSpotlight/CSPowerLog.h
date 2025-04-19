@class NSMutableDictionary, NSDate;

@interface CSPowerLog : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsByBundleID;
@property (retain, nonatomic) NSMutableDictionary *reasonedOperationsByBundleID;
@property (retain, nonatomic) NSDate *startFlushDate;
@property (retain, nonatomic) NSDate *endFlushDate;
@property (nonatomic) unsigned long long cachedCount;
@property (nonatomic) BOOL onBattery;

+ (id)sharedInstance;
+ (id)keyNameForOperation:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)flush;
- (void)_addToDictionary:(long long)a0 bundleID:(id)a1 itemCount:(unsigned long long)a2 code:(long long)a3;
- (void)_addToDictionary:(long long)a0 bundleID:(id)a1 itemCount:(unsigned long long)a2 reason:(id)a3;
- (void)flushToPowerLog_locked_and_unlock;
- (void)logWithBundleID:(id)a0 indexOperation:(long long)a1 itemCount:(unsigned long long)a2 code:(long long)a3;
- (void)logWithBundleID:(id)a0 indexOperation:(long long)a1 itemCount:(unsigned long long)a2 reason:(id)a3;
- (void)updateDictionaryAndUnlock:(unsigned long long)a0 cacheCount:(long long)a1 keyName:(id)a2 operationDictionary:(id)a3;
- (void)updateDictionaryAndUnlock:(unsigned long long)a0 keyName:(id)a1 operationDictionary:(id)a2;

@end
