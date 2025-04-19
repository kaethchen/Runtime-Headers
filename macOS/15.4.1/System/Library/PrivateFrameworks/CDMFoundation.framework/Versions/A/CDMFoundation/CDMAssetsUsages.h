@class NSMutableDictionary;

@interface CDMAssetsUsages : NSObject {
    NSMutableDictionary *_usages;
}

+ (id)cdmAssetsUsageKeyToString:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addUsageForKey:(long long)a0 withAssetUsageValue:(id)a1;
- (id)getUsages;

@end
