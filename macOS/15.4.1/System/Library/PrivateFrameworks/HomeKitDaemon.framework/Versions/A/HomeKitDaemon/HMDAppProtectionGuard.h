@class NSString;

@interface HMDAppProtectionGuard : HMFObject <HMDAppProtectionGuard>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initiateAuthenticationForApplicationWithBundleIdentifier:(id)a0 onBehalfOfProcessWithAuditToken:(struct { unsigned int x0[8]; })a1 completion:(id /* block */)a2;

@end
