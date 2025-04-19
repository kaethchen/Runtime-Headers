@class NSProgress, NSString;

@interface PLModelMigrationAction_MoveVersionsToMediaAnalysisAttributes : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (void)moveVersionsToMediaAnalysisAttributes:(id)a0;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;
- (void)processAsset:(id)a0 withContext:(id)a1;

@end
