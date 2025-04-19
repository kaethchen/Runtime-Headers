@class NSObject, NSMutableData, NSFileHandle;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_semaphore;

@interface AsyncPiper : NSObject

@property (retain) NSFileHandle *readHandle;
@property (retain) NSObject<OS_xpc_object> *writeXpcFd;
@property (retain) NSMutableData *bigData;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_semaphore> *semaForTestingOnly;

- (void).cxx_destruct;
- (id)initWithError:(id *)a0;
- (void)waitAndReleaseFd_ForTestingOnly;
- (id)dictWithError:(id *)a0;
- (void)moreData;
- (id)xpcFd;

@end
