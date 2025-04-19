@class NSDictionary, NSMutableDictionary;

@interface _DASPlistParser : NSObject

@property (retain, nonatomic) NSMutableDictionary *plistToDictionaryMap;
@property (retain, nonatomic) NSDictionary *overrideActivities;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsOverrideForActivity:(id)a0 withLimitation:(id)a1;
- (id)dictionaryForPlist:(long long)a0;
- (id)loadOverrides;
- (void)loadPlist:(long long)a0;
- (long long)suspensionThreshold;

@end
