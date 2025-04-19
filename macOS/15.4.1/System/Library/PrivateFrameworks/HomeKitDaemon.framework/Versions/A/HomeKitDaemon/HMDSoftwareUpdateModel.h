@class HMSoftwareUpdateDocumentationMetadata, NSString, NSDate, HMFSoftwareVersion, NSNumber;

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (copy, nonatomic) NSString *displayableSoftwareVersion;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *downloadSize;
@property (copy, nonatomic) NSNumber *installDuration;
@property (copy, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (copy, nonatomic) NSDate *releaseDate;

+ (id)properties;

- (id)cd_fetchManagedObjectInContext:(id)a0 error:(id *)a1;

@end
