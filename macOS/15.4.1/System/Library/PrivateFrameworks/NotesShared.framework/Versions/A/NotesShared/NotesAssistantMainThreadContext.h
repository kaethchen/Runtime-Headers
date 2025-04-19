@class NSManagedObjectContext;

@interface NotesAssistantMainThreadContext : NSObject

@property (class, readonly, nonatomic) NSManagedObjectContext *sharedMainThreadContext;
@property (class, readonly, nonatomic) BOOL sharedContextExists;

+ (void)_contextDidSave:(id)a0;
+ (void)_mainContextObjectsDidChange:(id)a0;
+ (void)initializeSearchIndexerDataSource;
+ (BOOL)saveSharedContext;

@end
