@class NSObject, GEOSQLiteDB, geo_isolater, NSMutableArray;
@protocol OS_dispatch_source;

@interface _GEOConfigDBOperationQueue : NSObject {
    GEOSQLiteDB *_db;
    geo_isolater *_isolator;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_source> *_timer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init:(id)a0;
- (void)cancelTimer;
- (void)flush;
- (void)scheduleTimer;
- (void)enqueueOperation:(id)a0;
- (void)flushOnDBQueue;

@end
