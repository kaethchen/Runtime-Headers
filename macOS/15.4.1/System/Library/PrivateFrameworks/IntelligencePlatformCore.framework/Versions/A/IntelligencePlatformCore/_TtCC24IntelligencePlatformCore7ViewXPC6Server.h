@class GDViewAccessToken, NSString, NSArray, GDViewAccessInfo, NSError;

@interface _TtCC24IntelligencePlatformCore7ViewXPC6Server : NSObject <GDViewXPCProtocol> {
    void /* unknown type, empty encoding */ auditToken;
    void /* unknown type, empty encoding */ process;
    void /* unknown type, empty encoding */ clientIdentifier;
    void /* unknown type, empty encoding */ entitledViewNames;
}

- (id)init;
- (void).cxx_destruct;
- (void)accessInfoForViewName:(NSString *)a0 useCase:(NSString *)a1 completion:(void (^)(GDViewAccessInfo *, NSError *))a2;
- (void)accessTokenForFeaturesWithIsSandboxed:(BOOL)a0 useCase:(id)a1 completion:(id /* block */)a2;
- (void)accessTokenForViewName:(NSString *)a0 isSandboxed:(BOOL)a1 useCase:(NSString *)a2 completion:(void (^)(GDViewAccessToken *, NSError *))a3;
- (void)performUpdateForViewNames:(NSArray *)a0 useCase:(NSString *)a1 includeDependencies:(BOOL)a2 completion:(void (^)(BOOL, NSError *))a3;
- (void)reportSQLiteErrorForViewName:(NSString *)a0 sqliteErrorCode:(long long)a1 useCase:(NSString *)a2 completion:(void (^)(BOOL, NSError *))a3;
- (void)reportUnknownErrorForViewName:(NSString *)a0 useCase:(NSString *)a1 completion:(void (^)(BOOL, NSError *))a2;

@end
