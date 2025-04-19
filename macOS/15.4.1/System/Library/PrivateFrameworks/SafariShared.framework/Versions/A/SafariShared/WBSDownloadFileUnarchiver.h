@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSDownloadFileUnarchiver : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (readonly, nonatomic) BOOL canInterruptUnarchiving;

- (id)init;
- (void).cxx_destruct;
- (void)_unarchiveFileWithName:(id)a0 inDirectoryWithHandle:(id)a1 completionHandler:(id /* block */)a2;
- (void)interruptUnarchiving;
- (void)unarchiveFileWithName:(id)a0 inDirectoryWithHandle:(id)a1 completionHandler:(id /* block */)a2;

@end
