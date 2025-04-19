@class NSString;

@interface ICASAppData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSString *appBuild;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAppVersion:(id)a0 appBuild:(id)a1;

@end
