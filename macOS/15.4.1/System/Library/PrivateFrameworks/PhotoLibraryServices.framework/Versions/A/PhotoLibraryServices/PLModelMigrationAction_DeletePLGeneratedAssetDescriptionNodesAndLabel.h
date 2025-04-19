@class NSProgress, NSString;

@interface PLModelMigrationAction_DeletePLGeneratedAssetDescriptionNodesAndLabel : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (long long)_deleteLabelWithCode1300InContext:(id)a0 error:(id *)a1;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
