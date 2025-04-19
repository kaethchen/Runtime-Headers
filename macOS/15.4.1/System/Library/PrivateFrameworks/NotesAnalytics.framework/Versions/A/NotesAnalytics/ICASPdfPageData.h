@class NSString, NSNumber;

@interface ICASPdfPageData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSNumber *startPageCount;
@property (readonly, nonatomic) NSNumber *endPageCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithStartPageCount:(id)a0 endPageCount:(id)a1;

@end
