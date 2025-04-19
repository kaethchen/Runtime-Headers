@class NSString, NSDictionary, NSArray, NSData;

@interface CATResult : NSObject

@property (retain, nonatomic) NSString *catId;
@property (retain, nonatomic) NSDictionary *meta;
@property (retain, nonatomic) NSArray *speak;
@property (retain, nonatomic) NSArray *print;
@property (retain, nonatomic) NSArray *dialogId;
@property (retain, nonatomic) NSArray *captionSpeak;
@property (retain, nonatomic) NSArray *captionPrint;
@property (retain, nonatomic) NSArray *printOnly;
@property (retain, nonatomic) NSArray *spokenOnly;
@property (retain, nonatomic) NSArray *spokenOnlyDefined;
@property (retain, nonatomic) NSArray *isApprovedForGrading;
@property (retain, nonatomic) NSString *visualId;
@property (retain, nonatomic) NSDictionary *visualParameters;
@property (retain, nonatomic) NSData *visualResponse;
@property (retain, nonatomic) NSArray *unfilteredSpeak;
@property (retain, nonatomic) NSArray *unfilteredPrint;
@property (retain, nonatomic) NSArray *unfilteredCaptionSpeak;
@property (retain, nonatomic) NSArray *unfilteredCaptionPrint;
@property (retain, nonatomic) NSArray *redactedSpeak;
@property (retain, nonatomic) NSArray *redactedPrint;
@property (retain, nonatomic) NSArray *redactedCaptionSpeak;
@property (retain, nonatomic) NSArray *redactedCaptionPrint;

- (void).cxx_destruct;

@end
