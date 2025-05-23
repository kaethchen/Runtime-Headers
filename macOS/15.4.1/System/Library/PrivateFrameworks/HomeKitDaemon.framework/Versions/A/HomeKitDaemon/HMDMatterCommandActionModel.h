@class NSString, NSArray, NSNumber;

@interface HMDMatterCommandActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *matterPathUUIDs;
@property (retain, nonatomic) NSNumber *enforceExecutionOrder;
@property (copy, nonatomic) NSArray *commands;

- (void)loadModelWithActionInformation:(id)a0;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;
- (id)decodeSerializedMatterCommands:(id)a0 home:(id)a1;
- (id)dependentUUIDs;

@end
