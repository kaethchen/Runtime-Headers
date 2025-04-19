@interface SCRPreferences : NSObject

+ (id)stringForKey:(id)a0;
+ (void)setFloat:(float)a0 forKey:(id)a1;
+ (void)setInteger:(long long)a0 forKey:(id)a1;
+ (void)setString:(id)a0 forKey:(id)a1;
+ (float)_floatForKey:(id)a0;
+ (void)_setValue:(id)a0 forKey:(id)a1;
+ (id)_valueForKey:(id)a0;
+ (long long)_integerForKey:(id)a0;
+ (int)_intForKey:(id)a0;
+ (void)_setUnsignedInteger:(unsigned long long)a0 forKey:(id)a1;
+ (long long)groupingBehavior;

@end
