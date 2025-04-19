@class NSObject;
@protocol OS_dispatch_source;

@interface Timer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isActive;
- (void)cancel;
- (void)resetWithTimeInterval:(double)a0 block:(id /* block */)a1;

@end
