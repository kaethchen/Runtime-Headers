@class NSRunLoop, NSPort, NSObject;
@protocol OS_voucher;

@interface TTSSpeechThread : NSThread {
    NSPort *_machPort;
    NSRunLoop *_threadRunLoop;
}

@property (retain, nonatomic) NSObject<OS_voucher> *voucher;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)stop;

@end
