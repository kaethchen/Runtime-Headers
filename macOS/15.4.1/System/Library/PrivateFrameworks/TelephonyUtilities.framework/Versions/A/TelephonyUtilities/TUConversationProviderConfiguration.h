@class NSString, NSSet;

@interface TUConversationProviderConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) BOOL supportsLinks;
@property (nonatomic) BOOL supportsSharePlay;
@property (nonatomic) BOOL supportsConversationHandoff;
@property (readonly, nonatomic) BOOL supportsVideo;
@property (nonatomic) BOOL wantsLeaveOnInvalidation;
@property (copy, nonatomic) NSString *pseudonymFeatureID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSSet *supportedMediaTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceName:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqualToConversationProvider:(id)a0;

@end
