@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CADDatabaseConnectionPoolManager : NSObject <CADDatabaseConnectionPoolManager> {
    NSMutableDictionary *_pools;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _purgeScheduled;
    NSObject<OS_dispatch_queue> *_purgeQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_purgeAndReschedule;
- (void)databaseChangedExternally:(id)a0;
- (id)poolForClient:(id)a0 options:(id)a1;
- (void)returnPool:(id)a0 forClient:(id)a1;
- (void)schedulePurge;

@end
