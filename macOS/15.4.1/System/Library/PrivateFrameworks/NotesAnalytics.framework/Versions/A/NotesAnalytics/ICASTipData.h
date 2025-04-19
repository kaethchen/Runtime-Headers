@class NSString;

@interface ICASTipData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *tipFeature;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTipFeature:(id)a0;

@end
