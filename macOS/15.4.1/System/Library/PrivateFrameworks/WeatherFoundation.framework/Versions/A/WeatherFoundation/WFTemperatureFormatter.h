@class NSString, NSLocale;

@interface WFTemperatureFormatter : NSFormatter

@property (nonatomic) struct UAMeasureFormat { } *measureFormatter;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *fallbackTemperatureString;
@property (nonatomic) int inputUnit;
@property (nonatomic) int outputUnit;
@property (nonatomic) unsigned long long roundingMode;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) int symbolType;
@property (nonatomic) BOOL includeDegreeSymbol;

+ (id)temperatureFormatterWithInputUnit:(int)a0 outputUnit:(int)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)stringForObjectValue:(id)a0;
- (void)_localeDidChangeNotification:(id)a0;
- (id)formattedTemperatureFromString:(id)a0;
- (id)_formatTemperatureValue:(id)a0 toUnit:(int)a1;
- (id)formattedStringFromTemperature:(id)a0;

@end
