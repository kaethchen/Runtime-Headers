@class _TtC12TextToSpeech15TTSSpeechTracer;

@interface TextToSpeech.TTSSpeechTracer : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_pid;
    void /* unknown type, empty encoding */ $__lazy_storage_$_procName;
    void /* unknown type, empty encoding */ operationQueue;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ eventQueue;
    void /* unknown type, empty encoding */ eventBufferSize;
}

@property (class, nonatomic, readonly) _TtC12TextToSpeech15TTSSpeechTracer *shared;

- (id)init;
- (void).cxx_destruct;
- (void)emitWithEvent:(id)a0 forIdentifier:(id)a1;
- (id)makeSpeechJobIdentifier;

@end
