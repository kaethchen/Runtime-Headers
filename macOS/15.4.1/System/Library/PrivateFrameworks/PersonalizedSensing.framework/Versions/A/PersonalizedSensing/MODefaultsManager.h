@class NSUserDefaults;

@interface MODefaultsManager : NSObject

@property (readonly, nonatomic) NSUserDefaults *userDefaults;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithSuiteName:(id)a0;
- (void)deleteObjectForKey:(id)a0;
- (id)initWithUniverse:(id)a0;
- (id)objectForKeyWithoutLog:(id)a0;
- (void)setObjectWithoutLog:(id)a0 forKey:(id)a1;

@end
