@class NSNumber, NSDate;

@interface PowerUICECGridDataForecastEntry : NSObject

@property (retain, nonatomic) NSDate *forecastDate;
@property (retain, nonatomic) NSNumber *forecastValue;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 forecastValue:(id)a1;

@end
