@interface WebSpeechRecognizerTask : NSObject {
    struct RetainPtr<WebSpeechRecognizerTaskImpl> { void *m_ptr; } _impl;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stop;
- (void)abort;
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithIdentifier:(struct ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long x0; })a0 locale:(id)a1 doMultipleRecognitions:(BOOL)a2 reportInterimResults:(BOOL)a3 maxAlternatives:(unsigned long long)a4 delegateCallback:(id /* block */)a5;

@end
