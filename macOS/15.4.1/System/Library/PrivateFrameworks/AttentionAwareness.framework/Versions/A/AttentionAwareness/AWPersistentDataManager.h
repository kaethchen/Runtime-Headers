@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWPersistentDataManager : NSObject {
    void *_shm_obj;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _loadAbsTime;
}

+ (id)sharedManager;
+ (BOOL)truncateAWPersistentData:(int *)a0 error:(id *)a1;
+ (BOOL)validateAWPersistentDataHeader:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct { struct { double x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } x0; unsigned long long x1; int x2; int x3; } x4[0]; } *)a0;
+ (BOOL)AWPersistentDataExists:(int *)a0;
+ (void)initAWPersistentDataHeader:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct { struct { double x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } x0; unsigned long long x1; int x2; int x3; } x4[0]; } *)a0;

- (id)init;
- (void).cxx_destruct;
- (int)nextFreeIndex;
- (BOOL)checkPreconditions:(id *)a0;
- (struct { double x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)clientStateWithConnection:(id)a0 index:(int)a1 error:(id *)a2;
- (BOOL)closeWithConnection:(id)a0 index:(int)a1 error:(id *)a2;
- (BOOL)isValidIndexForConnection:(id)a0 index:(int)a1 error:(id *)a2;
- (void)loadPersistentData;
- (int)openWithConnection:(id)a0 error:(id *)a1;

@end
