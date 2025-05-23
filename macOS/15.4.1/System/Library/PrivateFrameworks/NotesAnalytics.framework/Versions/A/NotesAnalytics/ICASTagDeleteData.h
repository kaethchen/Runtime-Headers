@class NSString, ICASTagDeleteApproach;

@interface ICASTagDeleteData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASTagDeleteApproach *tagDeleteApproach;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTagDeleteApproach:(id)a0;

@end
