@class NSUUID, NSString, NSURL, DADiscoveryConfiguration, NSData, NSMutableDictionary, NSDictionary, UTType, NSObject;
@protocol OS_nw_endpoint;

@interface DADevice : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *appAccessInfoDeviceMap;
@property (copy, nonatomic) NSString *bluetoothOTAName;
@property (nonatomic) unsigned short bluetoothAppearance;
@property (copy, nonatomic) NSURL *displayImageFileURL;
@property (readonly, nonatomic) NSDictionary *appAccessInfoMap;
@property (nonatomic) double approveTime;
@property (copy, nonatomic) DADiscoveryConfiguration *discoveryConfiguration;
@property (copy, nonatomic) NSDictionary *endpoints;
@property (readonly, copy, nonatomic) NSDictionary *persistentDictionaryRepresentation;
@property (nonatomic) BOOL pendingRemoval;
@property (nonatomic) BOOL allowPairing;
@property (copy, nonatomic) NSData *bluetoothClassicAddress;
@property (retain, nonatomic) NSUUID *bluetoothIdentifier;
@property (nonatomic) BOOL discoveredInExtension;
@property (copy, nonatomic) NSString *displayImageName;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long mediaPlaybackState;
@property (copy, nonatomic) NSString *mediaContentTitle;
@property (copy, nonatomic) NSString *mediaContentArtistName;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (nonatomic) long long protocol;
@property (retain, nonatomic) UTType *protocolType;
@property (copy, nonatomic) NSString *SSID;
@property (nonatomic) long long state;
@property (nonatomic) BOOL supportsGrouping;
@property (copy, nonatomic) NSData *txtRecordData;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *url;

+ (void)mergePersistentDictionary:(id)a0 into:(id)a1;
+ (BOOL)deviceMetadataURLValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)initWithPersistentDictionaryRepresentation:(id)a0 error:(id *)a1;

@end
