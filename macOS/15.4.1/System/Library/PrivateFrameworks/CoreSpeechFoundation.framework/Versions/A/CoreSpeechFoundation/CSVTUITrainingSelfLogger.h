@interface CSVTUITrainingSelfLogger : NSObject

+ (id)sharedLogger;

- (void)logSiriSetupEnrollmentSessionSummaryWithSiriSetupID:(id)a0 lastOpenedPage:(int)a1 completedPage:(int)a2 pageAttemptsMap:(id)a3;
- (void)logSiriSetupPHSEnrollmentDigitalZeroDetectionCompletedWithSiriSetupID:(id)a0 withPageNumber:(int)a1 withPhId:(id)a2 withMaxNumContinuousZeros:(int)a3 withMaxNumAllowedContinuousZeros:(int)a4 withIsMaxNumContinuousZerosOverThreshold:(BOOL)a5 withLocale:(id)a6 withVTAssetConfigVersion:(id)a7 withStageStatus:(int)a8 didDetectSpeechStart:(BOOL)a9 didUseTwoPassDetector:(BOOL)a10 didFirstPassTrigger:(BOOL)a11;
- (void)logSiriSetupPHSEnrollmentUtteranceCompletedWithSiriSetupID:(id)a0 withPageNumber:(int)a1 withPhId:(id)a2 withTopScoreForUtterance:(float)a3 withStartSampleCount:(int)a4 withEndSampleCount:(int)a5 withHasSpeechDetected:(int)a6;

@end
