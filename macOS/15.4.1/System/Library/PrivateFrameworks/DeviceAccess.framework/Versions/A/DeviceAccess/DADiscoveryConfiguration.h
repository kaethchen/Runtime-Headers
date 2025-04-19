@class NSString, NSUUID, UTType, NSArray, NSData;

@interface DADiscoveryConfiguration : NSObject <CUXPCCodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) UTType *iconType;
@property (nonatomic) BOOL presenceOnly;
@property (nonatomic) BOOL allowsBluetoothPairing;
@property (copy, nonatomic) NSString *associationIdentifier;
@property (copy, nonatomic) NSUUID *bluetoothIdentifier;
@property (copy, nonatomic) NSArray *bluetoothCompanyIdentifiers;
@property (copy, nonatomic) NSData *bluetoothCompanyPayload;
@property (copy, nonatomic) NSData *bluetoothCompanyPayloadMask;
@property (copy, nonatomic) NSArray *bluetoothServices;
@property (copy, nonatomic) NSData *bluetoothServicePayload;
@property (copy, nonatomic) NSData *bluetoothServicePayloadMask;
@property (nonatomic) unsigned long long bluetoothNameSubstringCompareOptions;
@property (copy, nonatomic) NSString *bluetoothNameSubstring;
@property (copy, nonatomic) NSArray *bonjourServiceTypes;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL allowsRename;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long bluetoothRange;
@property (copy, nonatomic) NSString *networkHotspotSSID;
@property (copy, nonatomic) NSArray *hotspotSSIDs;
@property (copy, nonatomic) NSArray *hotspotSSIDPrefixes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
