@class NSDictionary, NSString, NSNumber;

@interface _ACCExternalAccessoryInfo : NSObject

@property (retain) NSDictionary *fullAccessoryInfo;
@property (retain) NSString *primaryUUID;
@property (retain) NSString *name;
@property (retain) NSString *manufacturer;
@property (retain) NSString *model;
@property (retain) NSString *serial;
@property (retain) NSString *firmwareRevisionActive;
@property (retain) NSString *firmwareRevisionPending;
@property (retain) NSString *hardwareRevision;
@property (retain) NSString *ppid;
@property (retain) NSNumber *vendorID;
@property (retain) NSNumber *productID;
@property unsigned long long destinationSharingOptions;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyAccessoryInfo;
- (id)initWithAccessoryInfoDictionary:(id)a0;

@end
