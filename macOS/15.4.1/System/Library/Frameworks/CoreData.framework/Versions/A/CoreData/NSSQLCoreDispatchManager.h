@class NSMutableArray, NSSQLCore;

@interface NSSQLCoreDispatchManager : NSObject {
    NSSQLCore *_sqlCore;
    NSMutableArray *_connectionManagers;
}

- (void)dealloc;
- (id)initWithSQLCore:(id)a0 seedConnection:(id)a1;
- (void)scheduleBarrierBlock:(id /* block */)a0;
- (void)setExclusiveLockingMode:(BOOL)a0;

@end
