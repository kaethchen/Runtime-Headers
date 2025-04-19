@class NSSet, FBKFormResponse, NSURL, NSError, NSNumber, FBKFeedbackFollowup;

@interface FBKUploadTask : NSManagedObject

@property (retain) NSNumber *primitiveTaskState;
@property (retain) NSNumber *primitiveLocalSubmissionStage;
@property unsigned long long localSubmissionStage;
@property (retain) NSNumber *taskIdentifier;
@property (retain) NSURL *fileURL;
@property (retain) NSNumber *bytesToUpload;
@property (retain) NSNumber *bytesUploaded;
@property long long taskState;
@property (retain) NSError *lastError;
@property (retain) NSSet *bugSessions;
@property (retain) FBKFormResponse *formResponse;
@property (retain) FBKFeedbackFollowup *feedbackFollowup;

+ (id)entityName;

- (id)formID;
- (void)addFBKSessionsWithDEDSessions:(id)a0;
- (BOOL)allSessionsHaveReportedState;
- (BOOL)allSessionsHaveReportedUploadSize;
- (BOOL)allSessionsHaveState:(long long)a0;
- (id)filerForm;
- (BOOL)isBugSessionBacked;
- (unsigned long long)newSubmissionStageAfterBugSessionUpdate;
- (void)updateBytesToUploadAndUploadedAfterBugSessionUpdate;

@end
