@class NSString;

@interface AuthenticationServicesCore.ASCPasswordSignInEvent : NSObject {
    void /* unknown type, empty encoding */ providerBundleIdentifier;
}

@property (nonatomic, readonly) NSString *providerBundleIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ externalProviderListenerEndpoint;

- (id)init;
- (void).cxx_destruct;

@end
