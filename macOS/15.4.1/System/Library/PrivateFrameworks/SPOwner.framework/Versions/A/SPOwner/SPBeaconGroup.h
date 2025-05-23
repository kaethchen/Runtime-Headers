@class NSUUID, NSSet, NSString, NSData, NSDictionary, SPLostModeInfo;

@interface SPBeaconGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long version;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSSet *beaconIdentifiers;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *macAddress;
@property (nonatomic) BOOL isPairingComplete;
@property (nonatomic) BOOL isClassicConnected;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL isFindMyNetworkEnabled;
@property (nonatomic) long long status;
@property (nonatomic) long long classification;
@property (copy, nonatomic) NSDictionary *beaconMap;
@property (copy, nonatomic) NSDictionary *taskInformation;
@property (copy, nonatomic) SPLostModeInfo *lostModeInfo;
@property (copy, nonatomic) NSSet *multipartStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
