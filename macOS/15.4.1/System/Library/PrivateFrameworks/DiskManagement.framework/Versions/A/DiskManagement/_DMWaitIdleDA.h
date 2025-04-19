@interface _DMWaitIdleDA : NSObject {
    double _givenTimeout;
    struct __DASession { } *_givenDASession;
    BOOL _currentDAIdle;
}

+ (void)waitForDAIdleWithDASession:(struct __DASession { } *)a0 timeout:(double)a1 withDMTool:(id)a2 didGoIdle:(BOOL *)a3;

- (void)dealloc;
- (id)init;

@end
