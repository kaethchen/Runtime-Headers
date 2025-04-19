@class NSString, NSData;

@interface TetraSessionSerialized : NSManagedObject

@property (nonatomic, copy) NSString *remoteIdentifier;
@property (nonatomic, copy) NSData *serializedSession;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
