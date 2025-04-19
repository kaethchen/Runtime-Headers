@class NSProgress, NSString;

@interface PLModelMigrationAction_AddMissingAdjustedMediaMetadata : PLModelMigrationActionBackground <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (BOOL)isUnitTestingWithLibraryServiceManager:(id)a0;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
