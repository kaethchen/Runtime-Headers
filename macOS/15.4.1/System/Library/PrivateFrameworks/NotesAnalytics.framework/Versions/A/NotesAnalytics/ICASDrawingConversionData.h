@class NSString, ICASConversionMethod;

@interface ICASDrawingConversionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASConversionMethod *conversionMethod;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithConversionMethod:(id)a0;

@end
