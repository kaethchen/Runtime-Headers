@interface SCRCUserDefaultsBase : NSObject

- (BOOL)boolForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (float)floatForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)setInt:(int)a0 forKey:(id)a1;
- (void)addObserver:(id)a0 forKey:(id)a1;
- (int)intForKey:(id)a0;
- (id)dictForKey:(id)a0;
- (BOOL)boolForKeyPath:(id)a0;
- (void)setDict:(id)a0 forKey:(id)a1;
- (id)_longKeyForShortKey:(id)a0;
- (id)_shortKeyForLongKey:(id)a0;
- (float)floatForKeyPath:(id)a0;
- (int)intForKeyPath:(id)a0;
- (void)setBool:(BOOL)a0 forKeyPath:(id)a1;
- (void)setFloat:(float)a0 forKeyPath:(id)a1;
- (void)setInt:(int)a0 forKeyPath:(id)a1;
- (id)stringForKeyPath:(id)a0;

@end
