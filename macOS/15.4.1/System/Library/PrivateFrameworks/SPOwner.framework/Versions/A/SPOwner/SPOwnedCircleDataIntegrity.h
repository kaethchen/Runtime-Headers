@class NSArray, SPSharedSecretsDataCheck, SPDataIntegrityCheck;

@interface SPOwnedCircleDataIntegrity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SPDataIntegrityCheck *circleRecord;
@property (copy, nonatomic) SPDataIntegrityCheck *beaconRecord;
@property (copy, nonatomic) NSArray *peerTrusts;
@property (copy, nonatomic) SPSharedSecretsDataCheck *sharedSecrets;
@property (copy, nonatomic) SPDataIntegrityCheck *keySyncRecord;
@property (copy, nonatomic) NSArray *observations;
@property (copy, nonatomic) NSArray *itemSharingKey;
@property (copy, nonatomic) NSArray *estimatedLocations;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCircleRecord:(id)a0 beaconRecord:(id)a1 peerTrusts:(id)a2 sharedSecrets:(id)a3 keySyncRecord:(id)a4 observations:(id)a5 itemSharingKey:(id)a6 estimatedLocations:(id)a7;

@end
