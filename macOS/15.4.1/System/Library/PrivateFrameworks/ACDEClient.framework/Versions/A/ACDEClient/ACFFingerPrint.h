@class NSString, NSDictionary, NSNumber;

@interface ACFFingerPrint : ACFObject

@property (retain) NSString *checksum;
@property (retain) NSString *machineComputerName;
@property (retain) NSString *machineBonjourName;
@property (retain) NSString *machineModelName;
@property (retain) NSString *machineSerialNumber;
@property (retain) NSDictionary *machineMACAddresses;
@property (retain) NSString *machinePrimaryMACAddress;
@property (retain) NSString *machineBuildVersion;
@property (retain) NSDictionary *bootVolumeID;
@property (retain) NSString *hostUUID;
@property (retain) NSString *language;
@property (retain) NSString *timeZone;
@property (retain) NSString *region;
@property (retain) NSNumber *privateBrowsingEnabled;
@property (retain) NSString *productVersionKey;
@property (retain) NSString *productVersion;
@property (retain) NSString *ipAddress;

+ (id)keys;
+ (id)fingerPrint;

- (void)dealloc;
- (id)init;
- (id)dictionary;
- (id)stringRepresentation;
- (id)dictionaryWithFields:(long long)a0;
- (id)stringRepresentationWithPlistFormat:(unsigned long long)a0;
- (id)stringRepresentationWithPlistFormat:(unsigned long long)a0 fields:(long long)a1;

@end
