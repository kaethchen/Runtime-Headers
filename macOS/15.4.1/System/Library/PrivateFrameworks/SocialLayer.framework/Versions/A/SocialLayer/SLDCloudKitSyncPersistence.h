@class NSString, NSUserDefaults, NSMutableDictionary;

@interface SLDCloudKitSyncPersistence : NSObject {
    NSString *_name;
    NSString *_suiteName;
    NSUserDefaults *_defaults;
    NSMutableDictionary *_cache;
    id _nilValue;
}

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)reset;

@end
