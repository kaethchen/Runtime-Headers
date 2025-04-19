@class NSNumber, CCDevice, NSDate;

@interface CCDeviceSite : NSObject <NSSecureCoding, BMOPACKCodable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CCDevice *device;
@property (readonly, nonatomic) NSNumber *resourceGeneration;
@property (readonly, nonatomic) NSDate *expirationDate;

+ (id)deviceSiteForLocalDeviceUUID:(id)a0 resourceGeneration:(id)a1 idsDeviceId:(id)a2 platform:(long long)a3;
+ (id)deviceSiteFromRecord:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;
- (id)copyWithExpirationDate:(id)a0;
- (id)initWithDevice:(id)a0 resourceGeneration:(id)a1 expirationDate:(id)a2;
- (BOOL)isEqualToSetContributor:(id)a0;

@end
