@class NSString, NSArray;

@interface ICASSessionDetailData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSArray *sessionDetailArray;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSessionDetailArray:(id)a0;

@end
