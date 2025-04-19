@class NSString, LAUIAuthenticationSheetController, LAContext;

@interface SUOSUAuthenticationManager : NSObject <LAUIAuthenticationSheetDelegate>

@property (retain) LAUIAuthenticationSheetController *sheetController;
@property (retain) LAContext *localAuthenticationContext;
@property BOOL localAuthenticationRequired;
@property (retain) NSString *bootstrapTokenString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)unverifiedDataEntered:(unsigned int)a0 completion:(id /* block */)a1;
- (BOOL)_isManaged;
- (BOOL)bootstrapTokenAvailable;
- (BOOL)deviceIsEnrolledInDeKOTA;
- (void)evaluateLocalAuthenticationContextWithWindow:(id)a0 options:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)evaluateLocalAuthenticationPolicyWithContext:(id)a0 username:(id)a1 uid:(unsigned int)a2 password:(id)a3 prompt:(id)a4;
- (BOOL)evaluateLocalAuthenticationPolicyWithContext:(id)a0 username:(id)a1 uid:(unsigned int)a2 password:(id)a3 prompt:(id)a4 mdmInitiated:(BOOL)a5;
- (BOOL)evaluateLocalAuthenticationPolicyWithContext:(id)a0 username:(id)a1 uid:(unsigned int)a2 password:(id)a3 prompt:(id)a4 mdmInitiated:(BOOL)a5 options:(id)a6 withError:(id *)a7;
- (id)externalizedContextData;
- (id)initWithBootstrapTokenString:(id)a0;
- (void)updateLocalAuthenticationContextWithExternalizedContext:(id)a0;

@end
