@class NSProgress, NSString;

@interface PLModelMigrationAction_MigrateSocialGroupRebuildPersistence : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteGraphNodeSocialGroupDirectoryJournal;
- (void)deleteGraphNodeSocialGroupJournal;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;
- (long long)persistSocialGroupDirectoryJournalInContext:(id)a0 progress:(id)a1;

@end
