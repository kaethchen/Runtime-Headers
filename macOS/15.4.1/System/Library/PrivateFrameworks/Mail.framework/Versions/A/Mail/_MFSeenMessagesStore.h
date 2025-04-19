@class NSString, NSEntityDescription, NSPersistentStoreCoordinator;

@interface _MFSeenMessagesStore : NSObject

@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, copy, nonatomic) NSString *persistentStorePath;
@property (retain, nonatomic) NSEntityDescription *accountEntity;
@property (retain, nonatomic) NSEntityDescription *seenMessageEntity;

- (id)init;
- (void).cxx_destruct;
- (id)_managedObjectModel;

@end
