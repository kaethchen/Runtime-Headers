@class NSString, NSError, NSDate;

@interface SiriTTSTrainerTask : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) long long trainingStartTime;
@property (nonatomic) NSDate *taskSubmissionDate;
@property (nonatomic) double totalTrainingTime;
@property (readonly, retain, nonatomic) NSString *assetLanguage;
@property (readonly, retain, nonatomic) NSString *assetName;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *trainingAssetPath;
@property (retain, nonatomic) NSString *dataAssetPath;
@property (retain, nonatomic) NSString *inferenceAssetPath;
@property (nonatomic) BOOL forceToStart;
@property (nonatomic) long long taskStatus;
@property (nonatomic) long long taskMode;
@property (nonatomic) long long retryTimes;
@property (nonatomic) long long trainingStatus;
@property (nonatomic) long long currentTaskStatusProgressValue;
@property (nonatomic) long long totalTaskStatusProgressValue;
@property (nonatomic) float normalizedProgressValue;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long assetVersion;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTask:(id)a0;
- (id)initWithLanguage:(id)a0 name:(id)a1;
- (double)timeIntervalSinceSubmission;
- (double)timeIntervalSinceTrainingStart;

@end
