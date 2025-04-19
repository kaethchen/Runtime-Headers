@class NSString, ICASResultType;

@interface ICASResultData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASResultType *resultType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithResultType:(id)a0;

@end
