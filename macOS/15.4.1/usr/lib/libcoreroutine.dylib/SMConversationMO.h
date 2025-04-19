@class NSString, NSOrderedSet, SMSessionConfigurationMO;

@interface SMConversationMO : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSOrderedSet *receiverHandles;
@property (retain, nonatomic) SMSessionConfigurationMO *configuration;
@property (retain, nonatomic) SMSessionConfigurationMO *sosConfiguration;

+ (id)fetchRequest;
+ (id)managedObjectWithSMConversation:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithSMConversation:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
