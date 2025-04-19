@class NSString, NSDictionary, ICTTMergeableAttributedString, NSDate, NSNumber;

@interface ICTTAudioRecording : ICCRObject

@property (class, nonatomic, readonly) NSDictionary *CRProperties;

@property (nonatomic, retain) ICTTMergeableAttributedString *summary;
@property (nonatomic, retain) ICTTMergeableAttributedString *topLineSummary;
@property (nonatomic, retain) NSNumber *summaryVersion;
@property (nonatomic, retain) NSString *toplineSummaryModelVersionInfo;
@property (nonatomic, retain) NSString *longformSummaryModelVersionInfo;
@property (nonatomic, retain) id fragments;
@property (nonatomic, retain) NSNumber *callRecording;
@property (nonatomic, retain) NSNumber *callType;
@property (nonatomic, retain) NSString *callLocalSpeakerHandle;
@property (nonatomic, retain) NSString *callRemoteSpeakerHandle;
@property (nonatomic, retain) NSDate *callRecordingStartTime;

- (id)initWithIdentity:(id)a0 fields:(id)a1;
- (id)initWithICCRCoder:(id)a0;

@end
