@interface _TtCC18PodcastsFoundation13ShazamMatcherP33_02683B609352F691B94A08829495C57A19ThrottledSubscriber : NSObject <SHSessionDelegate> {
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ inputSubject;
    void /* unknown type, empty encoding */ outputSubject;
    void /* unknown type, empty encoding */ bufferedSignatures;
    void /* unknown type, empty encoding */ currentInput;
    void /* unknown type, empty encoding */ subscription;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ isCancelled;
}

- (id)init;
- (void).cxx_destruct;
- (void)session:(id)a0 didFindMatch:(id)a1;
- (void)session:(id)a0 didNotFindMatchForSignature:(id)a1 error:(id)a2;

@end
