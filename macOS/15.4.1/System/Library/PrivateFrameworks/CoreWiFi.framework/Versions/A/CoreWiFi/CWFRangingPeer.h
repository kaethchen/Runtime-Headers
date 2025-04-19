@class NSString, NSData;

@interface CWFRangingPeer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *MACAddress;
@property (copy, nonatomic) NSData *identifier;
@property (copy, nonatomic) NSData *PMK;
@property (nonatomic) unsigned long long numberOfMeasurements;
@property (nonatomic) BOOL useCoreRotation;

+ (id)rangingPeerWithMACAddress:(id)a0 PMK:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRangingPeer:(id)a0;

@end
