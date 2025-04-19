@class NSNumber;

@interface STWeatherHourlyForecast : STSiriModelObject {
    long long _timeIndex;
    long long _conditionCode;
    NSNumber *_temperature;
    NSNumber *_chanceOfPrecipitation;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)temperature;
- (id)chanceOfPrecipitation;
- (long long)conditionCode;
- (long long)timeIndex;
- (id)_initWithConditionCodeIndex:(long long)a0 timeIndex:(long long)a1 temperature:(id)a2 chanceOfPrecipitation:(id)a3;

@end
