@class NSError, ICAttachment;

@interface ICAudioRecordingManager : NSObject

@property (class, nonatomic, readonly) ICAttachment *currentAttachment;
@property (class, nonatomic, readonly) BOOL isRecording;
@property (class, nonatomic, readonly) BOOL isPaused;

+ (void)cancelCurrentAudioRecordingSessionWithCompletionHandler:(void (^)(NSError *))a0;

- (id)init;

@end
