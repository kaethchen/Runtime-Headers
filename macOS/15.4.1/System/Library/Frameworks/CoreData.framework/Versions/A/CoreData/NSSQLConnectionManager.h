@class NSSQLCore;

@interface NSSQLConnectionManager : NSObject {
    NSSQLCore *_sqlCore;
    id /* block */ _filter;
}

- (void)dealloc;
- (id)initWithSQLCore:(id)a0 seedConnection:(id)a1;
- (id)sqlCore;
- (void)disconnectAllConnections;
- (BOOL)handleStoreRequest:(id)a0;
- (id)initWithSQLCore:(id)a0 priority:(unsigned long long)a1 seedConnection:(id)a2;
- (void)scheduleBarrierBlock:(id /* block */)a0;
- (void)scheduleConnectionsBarrier:(id /* block */)a0;
- (void)setExclusiveLockingMode:(BOOL)a0;

@end
