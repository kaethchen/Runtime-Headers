@class NSString, ICASNoteType, NSNumber;

@interface ICASNoteData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *noteID;
@property (readonly, nonatomic) ICASNoteType *noteType;
@property (readonly, nonatomic) NSNumber *isScrapPaper;
@property (readonly, nonatomic) NSNumber *isHandwritingAutoRefineEnabled;
@property (readonly, nonatomic) NSNumber *isAudioTranscriptEnabled;
@property (readonly, nonatomic) NSNumber *isAudioSummaryEnabled;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithNoteID:(id)a0 noteType:(id)a1 isScrapPaper:(id)a2 isHandwritingAutoRefineEnabled:(id)a3 isAudioTranscriptEnabled:(id)a4 isAudioSummaryEnabled:(id)a5;

@end
