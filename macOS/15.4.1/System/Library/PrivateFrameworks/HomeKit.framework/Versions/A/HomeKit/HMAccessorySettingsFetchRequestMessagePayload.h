@class NSUUID, NSArray, NSString;

@interface HMAccessorySettingsFetchRequestMessagePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding>

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSArray *keyPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (id)initWithAccessoryUUID:(id)a0 keyPaths:(id)a1;
- (id)payloadCopy;

@end
