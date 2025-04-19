@class NSColor, NSString, NSURL, NSDateComponents, WMLocation, NSDate;

@interface WMWeatherData : WMObject <NSSecureCoding, WMDataWithDate>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long weatherDataType;
@property (copy) NSDateComponents *representedDate;
@property (copy) WMLocation *location;
@property struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property unsigned long long conditionCode;
@property (copy) NSString *conditionLocalizedString;
@property (copy) NSURL *imageLargeURL;
@property (copy) NSURL *imageSmallURL;
@property (copy) NSDate *creationDate;
@property double temperatureCelsius;
@property double temperatureLowCelsius;
@property double temperatureHighCelsius;
@property (copy) NSColor *temperatureLowColor;
@property (copy) NSColor *temperatureHighColor;
@property float chanceOfPrecipitation;
@property (copy) NSDate *sunriseDate;
@property (copy) NSDate *sunsetDate;
@property (copy) NSString *naturalLanguageStringCelsius;
@property (copy) NSString *naturalLanguageStringFahrenheit;
@property (readonly) double temperatureFahrenheit;
@property (readonly) double temperatureLowFahrenheit;
@property (readonly) double temperatureHighFahrenheit;
@property (readonly) double temperatureBasedOnLocale;
@property (readonly) double temperatureLowBasedOnLocale;
@property (readonly) double temperatureHighBasedOnLocale;
@property (readonly, retain) NSString *temperatureStringBasedOnLocale;
@property (readonly, retain) NSString *temperatureStringLowBasedOnLocale;
@property (readonly, retain) NSString *temperatureStringHighBasedOnLocale;
@property (readonly, retain) NSString *temperatureStringHighLowBasedOnLocale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)knownKeys;
+ (double)temperatureBasedOnLocaleGivenCelsius:(double)a0 fahrenheit:(double)a1;
+ (double)temperatureInFahrenheitGivenCelsius:(double)a0;
+ (id)temperatureStringBasedOnLocaleGivenCelsius:(double)a0 fahrenheit:(double)a1;
+ (id)temperatureUnitsBasedOnLocale;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)naturalLanguageString:(BOOL)a0;

@end
