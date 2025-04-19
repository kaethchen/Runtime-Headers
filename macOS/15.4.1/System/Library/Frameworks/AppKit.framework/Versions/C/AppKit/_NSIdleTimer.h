@interface _NSIdleTimer : NSObject {
    unsigned long long _id;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _suspensionCount;
    id /* block */ _handler;
}

@property (copy) id /* block */ handler;

+ (void)addIdleTimer:(id)a0;
+ (void)idle;
+ (void)removeIdleTimer:(id)a0;

- (void)dealloc;
- (id)init;
- (void)resume;
- (void)suspend;
- (void)idle;

@end
