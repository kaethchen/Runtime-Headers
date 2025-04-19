@interface VCSpeechFrameworkWrapper : NSObject

@property (readonly, nonatomic) BOOL frameworkLoaded;

+ (id)defaultSpeechFrameworkWrapper;

- (id)init;
- (id)supportedLocales;
- (id)findSpeechFrameworkPath;
- (BOOL)loadSpeechFramework;
- (id)newSFSpeechAnalyzerOptionsWithHighPriority:(BOOL)a0 loggingInfo:(id)a1 powerContext:(id)a2;
- (id)newSFSpeechAnalyzerTranscriberOptions;
- (id)newSFSpeechAnalyzerWithConfig:(struct tagVCSFSpeechAnalyzerConfig { id x0; id x1; id x2; id x3; id x4; id x5; id x6; BOOL x7; id x8; id x9; })a0 didChangeVolatileRange:(id /* block */)a1;
- (id)newSFSpeechAudioBufferRecognitionRequest;
- (id)newSFSpeechRecognizerWithLocale:(id)a0;

@end
