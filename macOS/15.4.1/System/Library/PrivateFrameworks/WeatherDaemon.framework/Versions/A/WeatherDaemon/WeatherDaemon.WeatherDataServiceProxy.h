@interface WeatherDaemon.WeatherDataServiceProxy : NSObject <WeatherDaemon.WeatherDataServiceProxyType> {
    void /* unknown type, empty encoding */ endpoint;
    void /* unknown type, empty encoding */ caching;
    void /* unknown type, empty encoding */ availableDataSetCaching;
    void /* unknown type, empty encoding */ statisticsCaching;
    void /* unknown type, empty encoding */ networkMonitor;
    void /* unknown type, empty encoding */ authenticator;
    void /* unknown type, empty encoding */ appConfigurationSettingsProvider;
    void /* unknown type, empty encoding */ lazyAirQualityScaleService;
    void /* unknown type, empty encoding */ lazyWeatherAlertService;
    void /* unknown type, empty encoding */ lazyAvailabilityDataManager;
    void /* unknown type, empty encoding */ lazyDataManager;
    void /* unknown type, empty encoding */ lazyHourlyStatisticsDataManager;
    void /* unknown type, empty encoding */ lazyDailyStatisticsDataManager;
    void /* unknown type, empty encoding */ lazyDailySummaryDataManager;
    void /* unknown type, empty encoding */ lazyMonthlyStatisticsDataManager;
    void /* unknown type, empty encoding */ weatherDataRequestDeduper;
    void /* unknown type, empty encoding */ weatherInstantsRequestDeduper;
    void /* unknown type, empty encoding */ weatherInstantRequestDeduper;
    void /* unknown type, empty encoding */ statisticsRequestDeduper;
    void /* unknown type, empty encoding */ hourlyStatisticsRequestDeduper;
    void /* unknown type, empty encoding */ dailyStatisticsRequestDeduper;
    void /* unknown type, empty encoding */ dailySummaryRequestDeduper;
    void /* unknown type, empty encoding */ monthlyStatisticsRequestDeduper;
    void /* unknown type, empty encoding */ availabilityRequestDeduper;
}

- (id)init;
- (void).cxx_destruct;
- (void)performRequestsWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchAirQualityScaleWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchAvailableDataSetsWith:(id)a0 completion:(id /* block */)a1;

@end
