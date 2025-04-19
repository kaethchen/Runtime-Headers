@class NSString, NSNumber, NSArray;

@interface ICASSearchResultExposureData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSNumber *topHitCountForLongestSearchString;
@property (readonly, nonatomic) NSNumber *hasNonTopHitResultsForLongestSearchString;
@property (readonly, nonatomic) NSNumber *attachmentHitCountForLongestSearchString;
@property (readonly, nonatomic) NSArray *searchBufferArray;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTopHitCountForLongestSearchString:(id)a0 hasNonTopHitResultsForLongestSearchString:(id)a1 attachmentHitCountForLongestSearchString:(id)a2 searchBufferArray:(id)a3;

@end
