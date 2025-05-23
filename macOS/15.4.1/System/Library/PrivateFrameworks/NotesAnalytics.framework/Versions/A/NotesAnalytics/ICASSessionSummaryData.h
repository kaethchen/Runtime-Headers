@class NSString, NSArray;

@interface ICASSessionSummaryData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSArray *sessionSummaryArray;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSessionSummaryArray:(id)a0;

@end
