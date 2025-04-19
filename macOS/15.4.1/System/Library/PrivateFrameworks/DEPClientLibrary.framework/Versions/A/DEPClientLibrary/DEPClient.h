@class NSString, NSXPCConnection, NSData, DEPDeviceUploadSubmitDeviceRequestPayload, DEPDeviceUploadCredentials, DEPDeviceUploadOrganization;

@interface DEPClient : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) DEPDeviceUploadCredentials *userCredentials;
@property (retain, nonatomic) DEPDeviceUploadOrganization *organization;
@property (retain, nonatomic) DEPDeviceUploadSubmitDeviceRequestPayload *deviceUploadRequest;
@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSString *pushTopic;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)a0;
- (void)_callServiceByType:(long long)a0 onProxy:(id)a1 completionBlock:(id /* block */)a2;
- (id /* block */)_cloudConfigRetrievalBlockWithClientCompletionBlock:(id /* block */)a0;
- (void)_completeServiceWithSuccess:(BOOL)a0 response:(id)a1 error:(id)a2;
- (id)_connectionError;
- (id)_organizationFromDict:(id)a0;
- (id)_organizationsFromArray:(id)a0;
- (id)_requestTypesFromDict:(id)a0;
- (void)_retrieveProxyObjectAndRunServiceType:(long long)a0 completionBlock:(id /* block */)a1;
- (id)_soldToIdsFromDict:(id)a0;
- (void)fetchConfigurationWithoutValidationWithCompletionBlock:(id /* block */)a0;
- (void)pingWithCompletionBlock:(id /* block */)a0;
- (void)provisionallyEnrollWithNonce:(id)a0 completionBlock:(id /* block */)a1;
- (void)registerForDEPPushForceUpdate:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(id)a0 completionBlock:(id /* block */)a1;
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(id)a0 completionBlock:(id /* block */)a1;
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(id)a0 credentials:(id)a1 completionBlock:(id /* block */)a2;
- (void)submitDeviceUploadRequest:(id)a0 credentials:(id)a1 completionBlock:(id /* block */)a2;
- (void)syncDEPPushToken:(id)a0 pushTopic:(id)a1 completionBlock:(id /* block */)a2;
- (void)unenrollWithCompletionBlock:(id /* block */)a0;

@end
