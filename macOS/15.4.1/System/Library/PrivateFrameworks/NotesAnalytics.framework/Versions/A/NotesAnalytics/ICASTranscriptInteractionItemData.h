@class NSString, ICASTranscriptInteractionTarget, ICASTranscriptActionType;

@interface ICASTranscriptInteractionItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASTranscriptInteractionTarget *transcriptInteractionTarget;
@property (readonly, nonatomic) ICASTranscriptActionType *transcriptActionType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTranscriptInteractionTarget:(id)a0 transcriptActionType:(id)a1;

@end
