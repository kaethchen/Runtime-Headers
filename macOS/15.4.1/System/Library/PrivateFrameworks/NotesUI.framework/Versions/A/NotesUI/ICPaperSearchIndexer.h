@class NSManagedObjectContext, NSSet, NSManagedObjectID;

@interface ICPaperSearchIndexer : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)cancelEverythingWithCompletion:(void (^)(void))a0;
- (void)needsToUpdateIndexWithManagedObjectContext:(NSManagedObjectContext *)a0 completionHandler:(void (^)(BOOL))a1;
- (void)updateIndexForAttachment:(NSManagedObjectID *)a0 userInitiated:(BOOL)a1 managedObjectContext:(NSManagedObjectContext *)a2 completionHandler:(void (^)(void))a3;
- (void)updateIndexForAttachments:(NSSet *)a0 userInitiated:(BOOL)a1 managedObjectContext:(NSManagedObjectContext *)a2 completionHandler:(void (^)(void))a3;
- (void)updateIndexWithManagedObjectContext:(NSManagedObjectContext *)a0 completionHandler:(void (^)(void))a1;

@end
