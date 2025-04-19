@class NSArray, NSString, RPCompanionLinkDevice, NSMutableArray, RPCompanionLinkClient;

@interface CCRapportDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *requestQueue;
@property (readonly, nonatomic) NSArray *serviceTypes;
@property (nonatomic) unsigned long long linkState;
@property (readonly, nonatomic) NSString *rapportIdentifier;
@property (readonly, nonatomic) NSString *shortenedRapportIdentifier;
@property (retain, nonatomic) NSString *ccDeviceIdentifier;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) RPCompanionLinkDevice *device;
@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (readonly, nonatomic) long long platform;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)handleInvalidationWithError:(id)a0;
- (id)initWithRPCompanionLinkDevice:(id)a0;
- (void)invalidateClientWithError:(id)a0;

@end
