@class NSString, AKAnisetteData, NSData, NSError, NSURLRequest, AKAttestationData;

@interface AppleIDSetupDaemon.AnisetteClient : NSObject <AKAnisetteServiceProtocol> {
    void /* unknown type, empty encoding */ send;
}

- (id)init;
- (void).cxx_destruct;
- (void)eraseAnisetteWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(void (^)(AKAnisetteData *, NSError *))a1;
- (void)fetchPeerAttestationDataForRequest:(NSURLRequest *)a0 completion:(void (^)(AKAttestationData *, NSError *))a1;
- (void)legacyAnisetteDataForDSID:(NSString *)a0 withCompletion:(void (^)(AKAnisetteData *, NSError *))a1;
- (void)provisionAnisetteWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)syncAnisetteWithSIMData:(NSData *)a0 completion:(void (^)(BOOL, NSError *))a1;

@end
