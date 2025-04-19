@class NSNumber, NSString;

@interface TIRevisionRateAnalysisSummary : NSObject

@property (nonatomic) BOOL hasEmojiInput;
@property (nonatomic) BOOL hasCursorMovement;
@property (retain, nonatomic) NSNumber *sessionAlignmentConfidence;
@property (nonatomic) long long tappedCount;
@property (nonatomic) long long autocorrectedCount;
@property (nonatomic) long long revisedCount;
@property (nonatomic) long long revisedAutocorrectionCount;
@property (retain, nonatomic) NSString *languageRegion;

- (void).cxx_destruct;

@end
