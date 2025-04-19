@class NSString, NSData, NSNumber, PKPaymentRequest;

@interface PKInAppPaymentPresentationHostContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentRequest *request;
@property (nonatomic) BOOL awaitingRemoteNetworkPaymentRequest;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (copy, nonatomic) NSString *sceneBundleIdentifier;
@property (copy, nonatomic) NSString *teamID;
@property (nonatomic) BOOL omitPresentationTarget;
@property (copy, nonatomic) NSNumber *orientation;
@property (copy, nonatomic) NSString *analyticsSubject;
@property (copy, nonatomic) NSData *analyticsArchivedSessionToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fulfillPromisedRemoteNetworkPaymentRequest:(id)a0;
- (BOOL)isEqualToHostContext:(id)a0;

@end
