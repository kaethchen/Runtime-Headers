@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLTimedDispatchGroup : NSObject {
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_lock_sessions;
    NSString *_name;
    double _defaultTimeout;
}

- (id)description;
- (void).cxx_destruct;
- (void)notify:(id /* block */)a0;
- (id)enterWithTimeout:(double)a0 name:(id)a1;
- (id)initWithQueue:(id)a0 name:(id)a1;
- (id)defaultPreferredResult;
- (id)enterWithName:(id)a0;
- (id)initWithQueue:(id)a0 name:(id)a1 defaultTimeout:(double)a2;

@end
