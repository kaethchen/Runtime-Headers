@class NSString, NSNumber, ICASRecordingActionType;

@interface ICASAudioRecordingData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSNumber *totalRecordingTime;
@property (readonly, nonatomic) ICASRecordingActionType *recordingActionType;
@property (readonly, nonatomic) NSNumber *didAppBackgroundOccur;
@property (readonly, nonatomic) NSNumber *didNoteMultitaskingOccur;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTotalRecordingTime:(id)a0 recordingActionType:(id)a1 didAppBackgroundOccur:(id)a2 didNoteMultitaskingOccur:(id)a3;

@end
