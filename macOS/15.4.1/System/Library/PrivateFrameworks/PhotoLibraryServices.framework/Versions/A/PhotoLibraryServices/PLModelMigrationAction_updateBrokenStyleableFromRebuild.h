@class NSProgress, NSString;

@interface PLModelMigrationAction_updateBrokenStyleableFromRebuild : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildFetchRequest;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
