@class NSData, NSString, NSError;

@interface SafariCore.WBSPasskeyStore : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ isForTesting;
    void /* unknown type, empty encoding */ unownedExecutor;
    void /* unknown type, empty encoding */ executorQueue;
}

- (id)init;
- (id)initForTesting:(BOOL)a0 queue:(id)a1;
- (void)test_copyPasskeyWithCredentialID:(NSData *)a0 toGroup:(NSString *)a1 inRecentlyDeleted:(BOOL)a2 completionHandler:(void (^)(BOOL))a3;
- (void)test_createLegacyCredentialWithName:(NSString *)a0 displayName:(NSString *)a1 relyingParty:(NSString *)a2 userHandle:(NSData *)a3 completionHandler:(void (^)(NSData *, NSError *))a4;
- (void)test_createPasskeyWithName:(NSString *)a0 displayName:(NSString *)a1 relyingParty:(NSString *)a2 userHandle:(NSData *)a3 groupID:(NSString *)a4 inRecentlyDeleted:(BOOL)a5 completionHandler:(void (^)(NSData *, NSError *))a6;
- (void)test_createPasskeyWithName:(NSString *)a0 displayName:(NSString *)a1 relyingParty:(NSString *)a2 userHandle:(NSData *)a3 groupID:(NSString *)a4 inRecentlyDeleted:(BOOL)a5 unsafeAllowRealKeychainAccess:(BOOL)a6 completionHandler:(void (^)(NSData *, NSError *))a7;

@end
