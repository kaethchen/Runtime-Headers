@class NSString, PLResult, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLTimedDispatchGroupEnterSession : NSObject {
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
    double _timeout;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_didLeave;
    PLResult *_lock_result;
    NSString *_name;
}

- (id)description;
- (void).cxx_destruct;
- (id)result;
- (void)cancel;
- (BOOL)wasCancelled;
- (void)enter;
- (BOOL)leave;
- (BOOL)didTimeout;
- (BOOL)leaveWithResult:(id)a0;
- (void)_handleTimeoutCallback;
- (BOOL)_lock_leaveIfPossible;
- (id)initWithGroup:(id)a0 queue:(id)a1 timeout:(double)a2 name:(id)a3;

@end
