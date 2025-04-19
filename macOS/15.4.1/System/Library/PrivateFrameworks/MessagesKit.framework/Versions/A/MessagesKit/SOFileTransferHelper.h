@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SOFileTransferHelper : SOHelper

@property (retain) NSMutableDictionary *guidToResolvedBookmarkMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;

+ (id)sharedInstance;
+ (id)bundleName;

- (id)init;
- (void).cxx_destruct;
- (id)otherPersonForFileTransferGUID:(id)a0;
- (id)accountIDForFileTransferGUID:(id)a0;
- (void)addVisibleTransferGUIDs:(id)a0;
- (id)archiveURL:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)atLeastOneTransferIncomplete;
- (id)fileTransfersIncompleteAlert;
- (void)removeVisibleTransferGUIDs:(id)a0;
- (void)runBlockWhenDoneArchiving:(id /* block */)a0;
- (void)setUserVisibleURL:(id)a0 fileTransferGUID:(id)a1;
- (id)userVisibleURLForGUID:(id)a0;
- (id)visibleFileTransferGUIDs;

@end
