@class NSString, NSNumber, NSArray;

@interface ICASAudioTranscriptInteractionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSNumber *wasTranscriptViewed;
@property (readonly, nonatomic) NSNumber *wasSummaryViewed;
@property (readonly, nonatomic) NSArray *transcriptInteractionSummaryArray;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithWasTranscriptViewed:(id)a0 wasSummaryViewed:(id)a1 transcriptInteractionSummaryArray:(id)a2;

@end
