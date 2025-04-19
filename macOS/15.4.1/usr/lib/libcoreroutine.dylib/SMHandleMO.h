@class NSString, NSOrderedSet, SMConversationMO;

@interface SMHandleMO : NSManagedObject

@property (copy, nonatomic) NSString *primaryHandle;
@property (retain, nonatomic) NSOrderedSet *secondaryHandles;
@property (retain, nonatomic) SMConversationMO *conversation;

+ (id)fetchRequest;
+ (id)managedObjectWithSMHandle:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)managedObjectWithSMHandle:(id)a0 inManagedObjectContext:(id)a1;

@end
