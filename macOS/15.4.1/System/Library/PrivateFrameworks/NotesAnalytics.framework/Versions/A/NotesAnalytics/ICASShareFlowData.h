@class NSString, ICASShareFlowType;

@interface ICASShareFlowData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASShareFlowType *shareFlowType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithShareFlowType:(id)a0;

@end
