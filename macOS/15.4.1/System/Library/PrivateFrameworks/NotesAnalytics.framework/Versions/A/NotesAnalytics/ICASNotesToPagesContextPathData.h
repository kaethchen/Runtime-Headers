@class NSString, ICASNotesToPagesContextPath;

@interface ICASNotesToPagesContextPathData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASNotesToPagesContextPath *notesToPagesContextPath;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithNotesToPagesContextPath:(id)a0;

@end
