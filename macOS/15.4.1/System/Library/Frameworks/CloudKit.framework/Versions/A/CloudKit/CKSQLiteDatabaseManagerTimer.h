@class NSObject, NSDate, CKSQLiteDatabase;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CKSQLiteDatabaseManagerTimer : NSObject {
    CKSQLiteDatabase *_db;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
    NSObject<OS_dispatch_source> *_activityTimer;
    NSDate *_nextActivityDate;
    NSObject<OS_dispatch_queue> *_activityQueue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (id)nextActivityDate;
- (void)runActivities;
- (void)scheduleActivityDate:(id)a0;

@end
