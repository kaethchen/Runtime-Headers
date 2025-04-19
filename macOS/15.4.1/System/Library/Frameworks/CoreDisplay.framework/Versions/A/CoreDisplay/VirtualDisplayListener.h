@class NSLock, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface VirtualDisplayListener : NSObject {
    NSMapTable *_database;
    NSLock *_lock;
    unsigned int _portSet;
    void /* function */ *_demux;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _running;
}

- (void)dealloc;
- (void)forgetPort:(unsigned int)a0;
- (id)initWithDemux:(void /* function */ *)a0 strong:(BOOL)a1 name:(id)a2;
- (id)objectForPort:(unsigned int)a0;
- (void)rememberPort:(unsigned int)a0 forObject:(id)a1;
- (void)rx;

@end
