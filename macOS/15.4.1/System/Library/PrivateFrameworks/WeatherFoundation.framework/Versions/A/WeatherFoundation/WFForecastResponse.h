@class NSData, WFWeatherConditions;

@interface WFForecastResponse : WFResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFWeatherConditions *forecast;
@property (nonatomic) unsigned long long forecastType;
@property (nonatomic) BOOL responseWasFromCache;
@property (retain, nonatomic) NSData *rawAPIData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
