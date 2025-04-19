@class NSString, NSURL, NSXPCListenerEndpoint;

@interface ASCOfferContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) BOOL supportsDSIDLessInstall;
@property (readonly, nonatomic) BOOL shouldInstallParentApp;
@property (readonly, copy, nonatomic) NSString *presentingSceneIdentifier;
@property (readonly, copy, nonatomic) NSString *presentingSceneBundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *externalDeepLinkURL;
@property (readonly, nonatomic) BOOL universalLinkRequired;
@property (readonly, nonatomic) NSXPCListenerEndpoint *paymentViewServiceListener;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFlags:(long long)a0;
- (id)initWithFlags:(long long)a0 presentingSceneIdentifier:(id)a1 presentingSceneBundleIdentifier:(id)a2 externalDeepLinkURL:(id)a3 paymentViewServiceListener:(id)a4;
- (id)initWithPaymentViewServiceListener:(id)a0;
- (id)offerContextByAddingFlags:(long long)a0;
- (id)offerContextWithPresentingSceneIdentifier:(id)a0 presentingSceneBundleIdentifier:(id)a1 externalDeepLinkURL:(id)a2;

@end
