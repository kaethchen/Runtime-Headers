@class NSUUID;

@interface CSVoiceProfileSELFLogger : NSObject

@property (class, readonly, nonatomic) NSUUID *voiceProfileiCloudSyncIsolatedStreamID;

+ (void)initialize;
+ (id)sharedLogger;

- (void)logVoiceProfileICloudSyncFinishedForEnrollmentId:(id)a0 isVoiceProfileiCloudSyncSuccess:(BOOL)a1 failureReasonIfAny:(id)a2 forLocale:(id)a3;

@end
