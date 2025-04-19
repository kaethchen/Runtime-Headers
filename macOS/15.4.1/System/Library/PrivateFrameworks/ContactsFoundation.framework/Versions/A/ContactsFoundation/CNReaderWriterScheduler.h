@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CNReaderWriterScheduler : NSObject <CNReaderWriterScheduler> {
    long long _suspendedCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) NSMutableArray *activeReaders;
@property (readonly, nonatomic) NSMutableArray *pendingReaders;
@property (readonly, nonatomic) NSMutableArray *activeWriters;
@property (readonly, nonatomic) NSMutableArray *pendingWriters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (id)initWithQueue:(id)a0;
- (void)activateReader:(id)a0;
- (void)activateWriter:(id)a0;
- (void)addReaderWithIdentifier:(id)a0;
- (void)addWriterWithIdentifier:(id)a0;
- (void)appendDescriptionToBuilder:(id)a0;
- (id)performReaderBlock:(id /* block */)a0;
- (void)performSynchronousReaderBlock:(id /* block */)a0;
- (void)performSynchronousWriterBlock:(id /* block */)a0;
- (id)performWriterBlock:(id /* block */)a0;
- (void)removeReader:(id)a0;
- (void)removeWriter:(id)a0;

@end
