@class NSString, SSRVTUITrainingManager;
@protocol SRSTrainingManagerDelegate;

@interface SRSVoiceTrainingManager : NSObject <SSRVTUITrainingManagerDelegate> {
    SSRVTUITrainingManager *_trainingManager;
}

@property (weak, nonatomic) id<SRSTrainingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLanguageCode:(id)a0;
- (void)stopRMS;
- (void)VTUITrainingManagerFeedLevel:(float)a0;
- (void)cleanupWithCompletion:(id /* block */)a0;
- (void)getAudioSessionID:(id /* block */)a0;
- (void)playSoundsEffect:(long long)a0;
- (void)startRMS;
- (void)trainUtterance:(long long)a0 shouldUseASR:(BOOL)a1 completion:(id /* block */)a2;
- (id)voiceProfile;
- (void)cancelTrainingForSessionId:(long long)a0;
- (long long)convertStatus:(int)a0;
- (int)convertToAudioTone:(long long)a0;
- (id)initWithLanguageCode:(id)a0 withSharedUserId:(id)a1;

@end
