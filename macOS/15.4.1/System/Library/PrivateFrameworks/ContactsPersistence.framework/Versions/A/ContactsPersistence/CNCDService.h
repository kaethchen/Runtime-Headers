@class NSString;

@interface CNCDService : NSManagedObject

@property (retain, nonatomic) NSString *serviceName;

+ (id)serviceWithName:(id)a0 inManagedObjectContext:(id)a1 inPersistentStore:(id)a2;

- (id)correspondingObjectForRelationshipFromObject:(id)a0;

@end
