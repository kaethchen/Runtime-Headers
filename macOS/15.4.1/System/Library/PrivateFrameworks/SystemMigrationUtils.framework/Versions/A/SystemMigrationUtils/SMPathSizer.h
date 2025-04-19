@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SMPathSizer : NSObject

@property BOOL keepSizing;
@property (retain) NSObject<OS_dispatch_queue> *fileSizeQueue;
@property (retain) NSObject<OS_dispatch_queue> *keepSizingQueue;
@property BOOL shouldContinue;
@property (retain) NSMutableSet *hardlinkInodes;
@property (retain) NSMutableSet *cloneIDs;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (unsigned long long)directorySizeAndCount:(unsigned long long *)a0 atURL:(id)a1;
- (unsigned long long)fileSizeAtURL:(id)a0;
- (unsigned long long)getHFSFolderSize:(id)a0 andCount:(unsigned long long *)a1;

@end
