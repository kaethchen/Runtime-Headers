@class NSTimer;

@interface _MXExtensionRequestReceipt : NSObject {
    NSTimer *_timer;
    id /* block */ _completion;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelWithTimeInterval:(double)a0;
- (id)initWithCompletion:(id /* block */)a0;

@end
