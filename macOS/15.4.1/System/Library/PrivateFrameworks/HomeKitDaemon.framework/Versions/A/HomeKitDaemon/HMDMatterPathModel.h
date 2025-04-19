@class NSString, NSNumber;

@interface HMDMatterPathModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *endpointID;
@property (copy, nonatomic) NSNumber *clusterID;
@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *commandID;
@property (copy, nonatomic) NSNumber *eventID;

+ (id)properties;

- (void)cd_populateParentRelationshipInContext:(id)a0 error:(id *)a1;

@end
