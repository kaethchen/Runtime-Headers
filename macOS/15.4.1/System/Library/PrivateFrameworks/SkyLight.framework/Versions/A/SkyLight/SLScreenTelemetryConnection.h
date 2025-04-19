@class SLSZeroingWeakContainer, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface SLScreenTelemetryConnection : NSObject

@property (nonatomic) BOOL closed;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ updateBlock;
@property (readonly, retain, nonatomic) SLSZeroingWeakContainer *zeroingContainer;

+ (id)connectionWithZoneWidth:(unsigned int)a0 zoneHeight:(unsigned int)a1 zoneRows:(unsigned int)a2 zoneColumns:(unsigned int)a3 samplingInterval:(double)a4 queue:(id)a5 andUpdateBlock:(id /* block */)a6;

- (void)dealloc;
- (void)close;
- (void)closedWithError:(id)a0;
- (void)connectUsingXPCConnection:(id)a0 andConfigMessage:(id)a1;
- (void)handleMessage:(id)a0;
- (id)initWithZoneWidth:(unsigned int)a0 zoneHeight:(unsigned int)a1 zoneRows:(unsigned int)a2 zoneColumns:(unsigned int)a3 samplingInterval:(double)a4 queue:(id)a5 andUpdateBlock:(id /* block */)a6;

@end
