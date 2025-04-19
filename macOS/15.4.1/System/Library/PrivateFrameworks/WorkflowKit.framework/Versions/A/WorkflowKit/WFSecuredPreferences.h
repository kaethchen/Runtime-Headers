@class NSMutableDictionary, NSDictionary, NSURL;

@interface WFSecuredPreferences : NSObject

@property (class, readonly, nonatomic) WFSecuredPreferences *standardPreferences;

@property (retain, nonatomic) NSMutableDictionary *preferences;
@property (retain, nonatomic) NSDictionary *defaultPreferences;
@property (copy, nonatomic) NSURL *securedPreferencesFileURL;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void)reload;
- (void)savePreferences;
- (void)reloadWithDistributedNotification:(id)a0;

@end
