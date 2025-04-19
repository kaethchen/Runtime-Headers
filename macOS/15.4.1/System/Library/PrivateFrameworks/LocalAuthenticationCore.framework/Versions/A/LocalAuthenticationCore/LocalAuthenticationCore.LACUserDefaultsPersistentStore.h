@class NSData, NSString, NSError;

@interface LocalAuthenticationCore.LACUserDefaultsPersistentStore : SwiftNativeNSObject <LACPersistentStore> {
    void /* unknown type, empty encoding */ userDefaults;
}

- (id)init;
- (id)initWithSuiteName:(id)a0;
- (void)setData:(NSData *)a0 forKey:(NSString *)a1 completion:(void (^)(NSError *))a2;
- (void)dataForKey:(NSString *)a0 completion:(void (^)(NSData *, NSError *))a1;
- (void)removeObjectForKey:(NSString *)a0 completion:(void (^)(NSError *))a1;

@end
