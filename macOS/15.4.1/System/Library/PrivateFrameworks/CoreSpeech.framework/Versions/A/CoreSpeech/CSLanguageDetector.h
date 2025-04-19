@protocol CSLanguageDetectorDelegate;

@interface CSLanguageDetector : NSObject

@property (weak, nonatomic) id<CSLanguageDetectorDelegate> delegate;

- (void).cxx_destruct;
- (void)cancelCurrentRequest;
- (void)addSamples:(id)a0 numSamples:(unsigned long long)a1;
- (void)endAudio;
- (id)initWithModelURL:(id)a0;
- (void)recordRecognitionLanguage:(id)a0;
- (void)resetForNewRequest:(id)a0;
- (void)setInteractionIDforCurrentRequest:(id)a0;
- (void)setMostRecentRecognitionLanguage:(id)a0;

@end
