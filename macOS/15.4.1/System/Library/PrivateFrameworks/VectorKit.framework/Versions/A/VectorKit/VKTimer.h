@class NSObject;
@protocol OS_dispatch_source;

@interface VKTimer : NSObject {
    NSObject<OS_dispatch_source> *_source;
}

@property (readonly, nonatomic) double nextFireDate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)disable;
- (void)fireAfter:(double)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 queue:(id)a2;

@end
