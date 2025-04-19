@class NSString;

@interface CADNullAppProtectionGuard : NSObject <CADAppProtectionGuard>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)initiateAuthenticationForApplicationWithBundleIdentifier:(id)a0 onBehalfOfProcessWithAuditToken:(struct { unsigned int x0[8]; })a1 accessGrantedByEntitlement:(BOOL)a2 completion:(id /* block */)a3;

@end
