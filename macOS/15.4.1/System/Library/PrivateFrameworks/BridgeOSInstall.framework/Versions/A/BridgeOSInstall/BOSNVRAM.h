@interface BOSNVRAM : NSObject

+ (id)sharedInstance;

- (BOOL)boolForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (BOOL)setString:(id)a0 forKey:(id)a1;
- (unsigned char)byteForKey:(id)a0;
- (unsigned int)unsignedIntForKey:(id)a0;
- (unsigned long long)unsignedLongLongForKey:(id)a0;
- (BOOL)boolForKey:(id)a0 namespace:(id)a1;
- (unsigned char)byteForKey:(id)a0 namespace:(id)a1;
- (id)dataForKey:(id)a0 namespace:(id)a1;
- (BOOL)setData:(id)a0 forKey:(id)a1 namespace:(id)a2;
- (BOOL)setString:(id)a0 forKey:(id)a1 namespace:(id)a2;
- (id)stringForKey:(id)a0 namespace:(id)a1;
- (unsigned int)unsignedIntForKey:(id)a0 namespace:(id)a1;
- (unsigned long long)unsignedLongLongForKey:(id)a0 namespace:(id)a1;
- (void)forceSyncNow;

@end
