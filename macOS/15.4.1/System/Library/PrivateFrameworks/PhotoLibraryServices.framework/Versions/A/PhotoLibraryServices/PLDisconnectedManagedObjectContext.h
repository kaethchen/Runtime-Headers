@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (BOOL)canMergeRemoteChanges;
+ (BOOL)shouldHavePhotoLibrary;

- (void)performBlock:(id /* block */)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)setPhotoLibrary:(id)a0;
- (BOOL)isDatabaseCreationContext;

@end
