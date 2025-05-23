@class TCProgressContext, TCMessageContext, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, TCCancelDelegate;

@interface TCBackgroundThreadManager : NSObject {
    id<TCCancelDelegate> mCancelDelegate;
    BOOL mIsWaiting;
    unsigned long long mBlockCount;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_group> *mGroup;
    NSObject<OS_dispatch_queue> *mProgressReportingQueue;
}

@property (readonly) BOOL isCancelled;
@property (retain) TCMessageContext *messageContext;
@property (retain) TCProgressContext *progressContext;

- (void)dealloc;
- (void).cxx_destruct;
- (void)waitUntilComplete;
- (void)addASyncBlock:(id /* block */)a0;
- (id)initWithCancelDelegate:(id)a0;

@end
