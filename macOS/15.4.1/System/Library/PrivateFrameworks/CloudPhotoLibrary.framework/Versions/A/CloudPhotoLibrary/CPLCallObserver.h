@class NSDate, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CPLCallObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *_startDate;
    Class _aClass;
    SEL _selector;
    BOOL _objectIsClass;
    NSString *_functionName;
    NSString *_callDescription;
}

+ (void)observeAsyncCallOn:(id)a0 selector:(SEL)a1 block:(id /* block */)a2;
+ (void)observeAsyncCallWithFunction:(id)a0 block:(id /* block */)a1;
+ (void)observeSyncCallOn:(id)a0 selector:(SEL)a1 block:(id /* block */)a2;
+ (void)observeSyncCallWithFunction:(id)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (id)_callDescription;
- (void)callDidFinish;
- (id)initWithObject:(id)a0 selector:(SEL)a1 functionName:(id)a2;

@end
