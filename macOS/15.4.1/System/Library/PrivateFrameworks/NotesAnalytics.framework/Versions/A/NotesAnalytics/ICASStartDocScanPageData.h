@class NSString, NSNumber;

@interface ICASStartDocScanPageData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSNumber *startPageCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithStartPageCount:(id)a0;

@end
