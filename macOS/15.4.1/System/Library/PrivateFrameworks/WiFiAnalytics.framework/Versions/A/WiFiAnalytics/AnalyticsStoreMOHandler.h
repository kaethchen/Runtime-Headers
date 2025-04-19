@class NSPersistentContainer, NSManagedObjectContext;

@interface AnalyticsStoreMOHandler : NSObject

@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSManagedObjectContext *backgroundStoreMoHandlerMOC;

+ (id)sharedAnalyticsStoreMOHandlerWithContainer:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (id)managedObjectContext;
- (void)contextDidSave:(id)a0;
- (void)pruneTestBSSes:(id)a0;
- (void)ageOutManagedObjectsOlderThan:(double)a0;
- (void)performBlockOnManagedObjectContext:(id)a0 block:(id /* block */)a1;
- (void)performBlockOnManagedObjectContextForNSData:(id)a0 withDate:(id)a1 block:(id /* block */)a2;
- (void)performPruneBasedOnStoreSizeAndSave;
- (void)pruneManagedObjects;
- (void)releaseBackgroundStoreMoHandlerMOC;
- (BOOL)saveManagedObjectContext;
- (BOOL)setBssManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (BOOL)setNetworkManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (void)updateManagedObjectContextWithoutSave;

@end
