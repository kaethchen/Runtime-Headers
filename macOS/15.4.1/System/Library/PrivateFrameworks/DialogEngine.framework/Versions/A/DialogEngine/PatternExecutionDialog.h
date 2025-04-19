@class NSString, NSNumber;

@interface PatternExecutionDialog : NSObject

@property (retain, nonatomic) NSString *dialogId;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *fullPrint;
@property (retain, nonatomic) NSString *fullSpeak;
@property (retain, nonatomic) NSString *supportingPrint;
@property (retain, nonatomic) NSString *supportingSpeak;
@property (retain, nonatomic) NSNumber *printOnly;
@property (retain, nonatomic) NSNumber *spokenOnly;
@property (retain, nonatomic) NSString *unfilteredFullPrint;
@property (retain, nonatomic) NSString *unfilteredFullSpeak;
@property (retain, nonatomic) NSString *unfilteredSupportingPrint;
@property (retain, nonatomic) NSString *unfilteredSupportingSpeak;
@property (retain, nonatomic) NSString *redactedFullPrint;
@property (retain, nonatomic) NSString *redactedFullSpeak;
@property (retain, nonatomic) NSString *redactedSupportingPrint;
@property (retain, nonatomic) NSString *redactedSupportingSpeak;
@property (nonatomic) BOOL isApprovedForGrading;

- (void).cxx_destruct;

@end
