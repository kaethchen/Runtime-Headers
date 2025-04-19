@class NSNumber;

@interface MKFLocalBulletinMatterRegistration : MKFLocalBulletinAccessoryRegistration

@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *clusterID;
@property (copy, nonatomic) NSNumber *endpointID;
@property (copy, nonatomic) NSNumber *eventID;

+ (id)fetchRequest;
+ (id)fetchAllMatterRegistrationsForEndpointID:(id)a0 accessoryModelID:(id)a1 managedObjectContext:(id)a2;
+ (id)fetchMatterRegistrationForEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 eventID:(id)a3 accessoryModelID:(id)a4 managedObjectContext:(id)a5;

@end
