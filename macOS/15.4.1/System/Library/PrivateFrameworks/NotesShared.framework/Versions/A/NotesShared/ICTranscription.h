@interface ICTranscription : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _currentlyTranscribingAttachment;
    void /* unknown type, empty encoding */ _downloadingModel;
    void /* unknown type, empty encoding */ workerContext;
}

@property (class, nonatomic, retain) ICTranscription *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addAudioTranscriptionTaskToQueueWithAttachmentIdentifier:(id)a0;
- (void)addCallRecordingTranscriptionTaskToQueueWithSpeakers:(id)a0 NGASR:(BOOL)a1 attachmentIdentifier:(id)a2;

@end
