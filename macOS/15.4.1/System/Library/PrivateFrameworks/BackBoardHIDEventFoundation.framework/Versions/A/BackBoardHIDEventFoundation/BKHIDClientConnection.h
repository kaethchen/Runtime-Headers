@class NSString;

@interface BKHIDClientConnection : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct __IOHIDEventSystemConnection { } *_lock_connection;
    struct atomic_flag { _Atomic BOOL _Value; } _invalid;
}

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) unsigned int task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionWithConnection:(struct __IOHIDEventSystemConnection { } *)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct __IOHIDEventSystemConnection { } *)connection;
- (id)initWithConnection:(struct __IOHIDEventSystemConnection { } *)a0;
- (void)invalidate;
- (struct __IOHIDEventSystemConnection { } *)copyConnection;

@end
