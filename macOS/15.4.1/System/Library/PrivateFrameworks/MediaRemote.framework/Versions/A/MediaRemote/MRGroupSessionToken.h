@class NSString, _MRGroupSessionTokenProtobuf, NSData, MRGroupSessionHostInfo, NSNumber, MRDiscoveredGroupSession;

@interface MRGroupSessionToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSString *equivalentMediaIdentifier;
@property (readonly, nonatomic) NSString *effectiveIdentifier;
@property (retain, nonatomic) NSString *storefrontCountryCode;
@property (readonly, nonatomic) NSString *sharedSecret;
@property (readonly, nonatomic) _MRGroupSessionTokenProtobuf *protobuf;
@property (readonly, nonatomic) MRDiscoveredGroupSession *discoveredSession;
@property (readonly, nonatomic) NSData *invitationData;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL autoConnect;
@property (readonly, nonatomic) NSString *joinURLString;
@property (readonly, nonatomic) MRGroupSessionHostInfo *hostInfo;
@property (readonly, nonatomic) NSString *localizedSessionName;
@property (readonly, nonatomic) NSString *hostDisplayName;
@property (readonly, nonatomic) NSNumber *version;

+ (id)tokenForJoinURLString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned char)routeType;
- (id)initWithDeviceInfo:(id)a0;
- (id)initWithDiscoveredSession:(id)a0;
- (id)initWithDiscoveredSession:(id)a0 autoConnect:(BOOL)a1;
- (id)initWithHostInfo:(id)a0 invitationData:(id)a1 sharedSecret:(id)a2 sessionIdentifier:(id)a3 equivalentMediaIdentifier:(id)a4 version:(id)a5;
- (id)initWithProtobuf:(id)a0;

@end
