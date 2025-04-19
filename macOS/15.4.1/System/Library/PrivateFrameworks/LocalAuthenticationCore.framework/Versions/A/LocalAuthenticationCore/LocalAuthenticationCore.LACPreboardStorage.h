@interface LocalAuthenticationCore.LACPreboardStorage : NSObject <LACSecureStorageDelegate> {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;
- (id)acmContextForUUID:(id)a0 error:(id *)a1;
- (id)bundleIDForRequest:(id)a0;

@end
