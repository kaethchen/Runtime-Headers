@class NSString;

@interface HMDHomeNetworkRouterManagingDeviceSettingsModel : HMDHomeSettingsBaseModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *primaryNetworkRouterManagingDeviceUUID;

+ (id)properties;
+ (id)defaultModelForHomeUUID:(id)a0;
+ (id)modelIDForHomeUUID:(id)a0;
+ (id)modelNamespace;

- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;
- (id)dependentUUIDs;

@end
