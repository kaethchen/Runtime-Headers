@class NSDictionary, NSString, TUNearbyDeviceHandleCapabilities;

@interface TUNearbyDeviceHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *knownIdentifiersByHandleType;
@property (readonly, nonatomic) NSDictionary *plistRepresentation;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long deviceModel;
@property (readonly, nonatomic) TUNearbyDeviceHandleCapabilities *capabilities;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)identifierDescription;
- (id)identifierWithType:(long long)a0;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1 deviceModel:(long long)a2;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1 deviceModel:(long long)a2 capabilities:(id)a3;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2 capabilities:(id)a3;
- (BOOL)isEqualToDeviceHandle:(id)a0;
- (BOOL)isEquivalentToDeviceHandle:(id)a0;

@end
