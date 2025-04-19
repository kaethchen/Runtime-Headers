@class NSSet, MKFLocalBulletinServiceRegistration;

@interface MKFLocalBulletinServiceGroup : HMDManagedObject

@property (retain, nonatomic) NSSet *associatedServiceUUIDs;
@property (retain, nonatomic) NSSet *cameraProfileUUIDs;
@property (retain, nonatomic) MKFLocalBulletinServiceRegistration *bulletinServiceRegistration;

+ (id)fetchRequest;

@end
