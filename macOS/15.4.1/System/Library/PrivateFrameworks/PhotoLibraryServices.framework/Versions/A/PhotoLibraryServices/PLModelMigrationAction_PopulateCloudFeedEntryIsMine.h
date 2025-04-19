@class NSProgress, NSString;

@interface PLModelMigrationAction_PopulateCloudFeedEntryIsMine : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (void)_migrateEntriesWithFetchRequest:(id)a0 moc:(id)a1 progress:(id)a2 result:(long long *)a3;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
