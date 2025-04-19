@class NSNumber;

@interface MKFLocalBulletinEndpointRegistration : MKFLocalBulletinAccessoryRegistration

@property (copy, nonatomic) NSNumber *endpointID;

+ (id)fetchRequest;
+ (id)fetchAllEndpointRegistrationsForAccessoryUUID:(id)a0 managedObjectContext:(id)a1;
+ (id)fetchEndpointRegistrationForAccessoryUUID:(id)a0 endpointID:(id)a1 managedObjectContext:(id)a2;

@end
