@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, APSKStreamVideoDelegate, APSKFrameSender;

@interface APSKStreamVideo : NSObject {
    id<APSKStreamVideoDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_options;
    id<APSKFrameSender> _frameSender;
    int _width;
    int _height;
    int _refreshRate;
}

@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) int displayWidth;
@property (readonly, nonatomic) int displayHeight;
@property (readonly, nonatomic) int displayRefreshRate;

- (id)init;
- (void).cxx_destruct;
- (void)setError:(int)a0;
- (void)setFrameSender:(id)a0;
- (int)enqueueFrame:(struct __CVBuffer { } *)a0 forTime:(long long)a1;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 options:(id)a2;
- (void)setDisplayWidth:(int)a0 height:(int)a1 refreshRate:(int)a2;

@end
