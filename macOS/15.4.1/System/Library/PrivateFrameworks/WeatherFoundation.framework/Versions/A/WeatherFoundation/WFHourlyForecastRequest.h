@class NSLocale;

@interface WFHourlyForecastRequest : WFAggregateForecastRequest

@property (retain, nonatomic) NSLocale *locale;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)startWithService:(id)a0;

@end
