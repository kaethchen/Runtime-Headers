@class NSMutableDictionary;

@interface APOdmlDefaults : APOdmlSingleton

@property (retain, nonatomic) NSMutableDictionary *factoryDefaults;
@property (nonatomic) struct __CFString { } *defaultsBundleID;

+ (BOOL)boolForKey:(id)a0;
+ (id)sharedInstance;
+ (id)arrayForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (double)doubleForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (void)setArray:(id)a0 forKey:(id)a1;
+ (void)setDouble:(double)a0 forKey:(id)a1;
+ (void)setInteger:(long long)a0 forKey:(id)a1;
+ (void)setString:(id)a0 forKey:(id)a1;
+ (id)_defaultValueForKey:(id)a0 valueClass:(Class)a1;
+ (void)_setDefaultValue:(id)a0 forKey:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
