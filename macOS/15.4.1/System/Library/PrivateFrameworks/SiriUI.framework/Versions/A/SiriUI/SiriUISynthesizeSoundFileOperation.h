@class NSSpeechSynthesizer, NSString, NSURL;

@interface SiriUISynthesizeSoundFileOperation : NSOperation <NSSpeechSynthesizerDelegate> {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly) NSSpeechSynthesizer *synthesizer;
@property (readonly, copy) NSString *string;
@property (readonly, copy) NSURL *url;
@property (readonly) BOOL speakingCompletedNormally;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)speechSynthesizer:(id)a0 didFinishSpeaking:(BOOL)a1;
- (id)initWithSynthesizer:(id)a0 string:(id)a1 toURL:(id)a2;

@end
