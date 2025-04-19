@class NSURL, NSString;

@interface SSRVoiceProfileRetrainerSATExclave : NSObject <SSRVoiceProfileRetrainer>

@property (readonly, nonatomic) NSURL *modelFilePath;
@property (readonly, nonatomic) BOOL implicitTrainingRequired;
@property (readonly, nonatomic) unsigned long long retrainerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVoiceRetrainingContext:(id)a0;
- (void)addUtterances:(id)a0 withPolicy:(id /* block */)a1 withCompletion:(id /* block */)a2;
- (id)initWithVoiceRetrainingContext:(id)a0 secureAsset:(id)a1 secureSpeakerRecognitionConfig:(id)a2;
- (BOOL)needsRetrainingWithAudioFiles:(id)a0;
- (id)purgeConfusionInformationWithPolicy:(id /* block */)a0;
- (void)purgeLastSpeakerEmbedding;
- (BOOL)resetModelForRetraining;

@end
