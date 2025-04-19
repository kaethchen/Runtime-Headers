@class NSString, NSArray, NSDictionary, NSDate;

@interface WBSCloudTabDeviceParameters : NSObject

@property (nonatomic) BOOL closeRequestSupported;
@property (nonatomic) BOOL cloudKitBookmarkSyncingSupported;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceTypeIdentifier;
@property (nonatomic) BOOL hasDuplicateName;
@property (nonatomic, getter=isEphemeralDevice) BOOL ephemeralDevice;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSArray *tabs;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)parametersWithDevice:(id)a0;
+ (id)parametersWithDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
