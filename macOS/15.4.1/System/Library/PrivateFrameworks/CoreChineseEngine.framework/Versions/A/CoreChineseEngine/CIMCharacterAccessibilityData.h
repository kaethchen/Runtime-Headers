@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface CIMCharacterAccessibilityData : NSObject

@property (readonly, retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)componentDescriptionForCharacter:(id)a0;
- (id)descriptionForCharacter:(id)a0 scriptType:(unsigned long long)a1;
- (id)descriptionForWord:(id)a0 scriptType:(unsigned long long)a1;

@end
