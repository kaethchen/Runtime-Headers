@interface ICBackgroundTranscriptionHelper : NSObject

+ (id)sharedInstance;

- (void)addAudioTranscriptionTaskToQueueWithIdentifier:(id)a0;
- (void)addCallRecordingTranscriptionTaskToQueueOnLaunch:(id)a0;

@end
