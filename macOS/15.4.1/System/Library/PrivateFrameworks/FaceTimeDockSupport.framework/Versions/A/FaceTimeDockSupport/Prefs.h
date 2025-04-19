@interface Prefs : NSObject

+ (id)arrayForKey:(id)a0;
+ (id)dictionaryForKey:(id)a0;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (void)setArray:(id)a0 forKey:(id)a1;
+ (void)setDictionary:(id)a0 forKey:(id)a1;
+ (void)setDouble:(double)a0 forKey:(id)a1;
+ (void)setFloat:(double)a0 forKey:(id)a1;
+ (void)setInteger:(long long)a0 forKey:(id)a1;
+ (void)setString:(id)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0 defaultValue:(BOOL)a1;
+ (double)doubleForKey:(id)a0 defaultValue:(double)a1;
+ (float)floatForKey:(id)a0 defaultValue:(double)a1;
+ (id)stringForKey:(id)a0 defaultValue:(id)a1;
+ (long long)integerForKey:(id)a0 defaultValue:(long long)a1;
+ (void)clearPreferenceForKey:(id)a0;
+ (void)copyPreference:(id)a0 toKey:(id)a1;

@end
