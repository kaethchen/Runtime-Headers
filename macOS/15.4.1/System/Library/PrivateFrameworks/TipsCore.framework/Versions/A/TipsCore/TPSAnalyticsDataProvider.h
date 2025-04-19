@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject

@property (weak, nonatomic) id<TPSAnalyticsDataProviderDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)contextForIdentifier:(id)a0;
- (id)experimentID;
- (id)correlationIDForIdentifier:(id)a0;
- (id)deliveryInfoVersion;
- (id)displayTypeForIdentifier:(id)a0;
- (id)experimentCampID;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)a0;

@end
