@class NSString, ICASContextPath;

@interface ICASContextPathData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASContextPath *contextPath;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithContextPath:(id)a0;

@end
