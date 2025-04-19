@class NSUUID, NSDate;

@interface RTAuthorizedLocationVisitLogMO : NSManagedObject

@property (copy, nonatomic) NSUUID *visitIdentifier;
@property (retain, nonatomic) NSDate *registrationDate;
@property long long locationTechnologyAvailability;

+ (id)fetchRequest;
+ (id)managedObjectWithAuthorizedLocationVisitLog:(id)a0 inManagedObjectContext:(id)a1;

@end
