@class NSString, ICASEndReason;

@interface ICASSessionEndData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASEndReason *endReason;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithEndReason:(id)a0;

@end
