@class NSUUID, NSString, SPBeaconRole, NSDictionary, SPDiscoveredAccessoryProductInformation, SPRawAccessoryMetadata;

@interface SPCertificationAssistantBeacon : NSObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) SPBeaconRole *role;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (copy, nonatomic) NSDictionary *taskInformation;
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *accessoryProductInfo;
@property (copy, nonatomic) SPRawAccessoryMetadata *rawMetadata;

- (void).cxx_destruct;
- (id)initWithInternalSimpleBeacon:(id)a0;

@end
