@class NSString, NSManagedObjectModel, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface AXSSWordDescriptionManager : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSString *languageDialectCode;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)languageCode;
- (id)descriptionForWord:(id)a0;
- (id)descriptionOfWord:(id)a0 forLanguage:(id)a1;

@end
