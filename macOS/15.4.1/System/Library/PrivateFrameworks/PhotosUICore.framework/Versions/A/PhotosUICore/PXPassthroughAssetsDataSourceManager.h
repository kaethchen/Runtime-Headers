@interface PXPassthroughAssetsDataSourceManager : PXAssetsDataSourceManager

- (id)init;
- (id)initWithDataSource:(id)a0;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;

@end
