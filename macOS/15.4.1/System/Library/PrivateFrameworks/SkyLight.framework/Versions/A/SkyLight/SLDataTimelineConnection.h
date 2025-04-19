@class NSString, SLDataTimelineSnapshotCollection, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface SLDataTimelineConnection : NSObject <SLDataTimelineConnection>

@property (nonatomic) BOOL connected;
@property (retain, nonatomic) SLDataTimelineSnapshotCollection *collection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (readonly, copy, nonatomic) id /* block */ updateBlock;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *updateBlockQueue;
@property (nonatomic) BOOL updateBlockEnqueued;
@property (readonly, nonatomic) NSString *name;

+ (id)connectionWithConnection:(id)a0 config:(id)a1 andErrorHandler:(id /* block */)a2;

- (void)dealloc;
- (void)close;
- (void)addSnapshots:(id)a0 forAction:(unsigned int)a1;
- (void)announceSnapshotsForAction:(unsigned int)a0;
- (void)handleMessage:(id)a0;
- (id)initWithConnection:(id)a0 config:(id)a1 andErrorHandler:(id /* block */)a2;

@end
