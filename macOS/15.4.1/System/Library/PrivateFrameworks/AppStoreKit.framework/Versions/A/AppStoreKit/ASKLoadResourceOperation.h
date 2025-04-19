@interface ASKLoadResourceOperation : NSOperation

@property (nonatomic, setter=_setLoadReason:) long long _loadReason;
@property (copy) id /* block */ outputBlock;

+ (id)supportedScheme;

- (void).cxx_destruct;
- (void)main;
- (void)didCompleteWithResource:(id)a0 error:(id)a1;
- (id)initWithURLRequest:(id)a0 URLSession:(id)a1 dataConsumer:(id)a2;

@end
