@class NSProgress, NSString;

@interface PLModelMigrationAction_FixBlankPhotosFromVideoMode : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startDate;
- (id)buildFetchRequest;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
