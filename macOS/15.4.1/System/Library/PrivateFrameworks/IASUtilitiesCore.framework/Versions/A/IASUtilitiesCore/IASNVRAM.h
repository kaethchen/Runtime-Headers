@interface IASNVRAM : NSObject

+ (BOOL)sync;
+ (BOOL)forceSync;
+ (id)dataForKey:(id)a0 withNamespace:(id)a1;
+ (BOOL)setString:(id)a0 forKey:(id)a1 withNamespace:(id)a2;
+ (id)stringForKey:(id)a0 withNamespace:(id)a1;
+ (BOOL)setData:(id)a0 forKey:(id)a1 withNamespace:(id)a2;
+ (BOOL)_setObject:(id)a0 forKey:(id)a1 withNamespace:(id)a2;

@end
