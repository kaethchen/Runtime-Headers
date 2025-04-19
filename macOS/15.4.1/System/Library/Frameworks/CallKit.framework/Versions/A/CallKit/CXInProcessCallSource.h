@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (void).cxx_destruct;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)localizedName;
- (int)processIdentifier;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 fallbackLocalizedName:(id)a2;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isPermittedToUsePublicAPI;
- (id)vendorProtocolDelegate;

@end
