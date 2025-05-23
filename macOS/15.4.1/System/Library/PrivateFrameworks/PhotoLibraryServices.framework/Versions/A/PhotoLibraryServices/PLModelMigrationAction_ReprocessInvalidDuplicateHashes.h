@class NSProgress, NSString;

@interface PLModelMigrationAction_ReprocessInvalidDuplicateHashes : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;
- (long long)removeDuplicateHashesAndResetAlbumsWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
