@class NSPersistentContainer, NSManagedObjectContext, NSString;

@interface DRSCKConfigStore : NSObject

@property (readonly, nonatomic) NSPersistentContainer *container;
@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) NSString *workingDirectory;

- (void).cxx_destruct;
- (id)_currentConfig_ON_MOC_QUEUE:(id *)a0;
- (id)currentConfig:(id *)a0;
- (id)initWithWorkingDirectory:(id)a0 isReadOnly:(BOOL)a1 errorOut:(id *)a2;
- (BOOL)resetToDefaultWithErrorOut:(id *)a0;
- (BOOL)saveConfig:(id)a0 errorOut:(id *)a1;

@end
