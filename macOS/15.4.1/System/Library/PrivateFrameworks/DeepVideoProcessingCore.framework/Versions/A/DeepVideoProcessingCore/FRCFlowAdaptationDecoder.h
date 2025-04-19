@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FRCFlowAdaptationDecoder : OFFlowEstimate {
    NSString *_espresso_file;
    NSObject<OS_dispatch_queue> *_submissionQueue;
}

- (void).cxx_destruct;
- (id)initWithMode:(long long)a0;
- (BOOL)bindCVPixelBuffers:(struct __CVBuffer { } *)a0 correlation:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 output:(struct __CVBuffer { } *)a3;
- (BOOL)estimateFlow:(struct __CVBuffer { } *)a0 correlation:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 output:(struct __CVBuffer { } *)a3 callback:(id /* block */)a4;
- (id)initWithMode:(long long)a0 revision:(long long)a1;
- (void)setupNetworkModel;

@end
