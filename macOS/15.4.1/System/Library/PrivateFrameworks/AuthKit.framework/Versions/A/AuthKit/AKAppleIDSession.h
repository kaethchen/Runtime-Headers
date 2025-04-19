@class NSString, AKDevice, AKAnisetteProvisioningController, AKAnisetteData, NSLock;
@protocol AKAnisetteServiceProtocol;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext> {
    NSString *_serviceID;
    AKAnisetteProvisioningController *_nativeAnisetteController;
    AKAnisetteProvisioningController *_pairedDeviceAnisetteController;
    AKAnisetteData *_proxiedAnisetteData;
    NSLock *_anisetteControllerLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AKDevice *pairedDevice;
@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 getAppleIDHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 getAppleIDRequestOrHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)relevantHTTPStatusCodes;
- (id)_pairedDeviceAnisetteController;
- (id)_generateAppleIDHeadersForRequest:(id)a0 error:(id *)a1;
- (void)_generateAppleIDHeadersForSessionTask:(id)a0 withCompletion:(id /* block */)a1;
- (id)_genericAppleIDHeadersDictionaryForRequest:(id)a0;
- (void)_handleAnisetteReprovisionWithRequestURL:(id)a0 anisetteController:(id)a1 completion:(id /* block */)a2;
- (void)_handleAnisetteURLResponse:(id)a0 forRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)_handleServerTimeAdjustmentWithTime:(id)a0 completion:(id /* block */)a1;
- (void)_handleURLSwitchingResponse:(id)a0 forRequest:(id)a1 withCompletion:(id /* block */)a2;
- (id)_nativeAnisetteController;
- (void)_reportOnRequest:(id)a0 response:(id)a1 attestationData:(id)a2;
- (void)_resetDeviceIdentityWithCompletion:(id /* block */)a0;
- (id)appleIDHeadersForRequest:(id)a0;
- (void)appleIDHeadersForRequest:(id)a0 completion:(id /* block */)a1;
- (void)appleIDHeadersUsingAnisetteWithCompletion:(id /* block */)a0;
- (void)appleIDHeadersWithCompletion:(id /* block */)a0;
- (void)handleResponse:(id)a0 forRequest:(id)a1 shouldRetry:(BOOL *)a2;
- (BOOL)shouldDenyRequestForURL:(id)a0 task:(id)a1;

@end
