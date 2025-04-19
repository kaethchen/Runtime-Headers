@class NSSet, NSArray;

@interface PXAssetCollectionDataSourceInfo : NSObject

@property (nonatomic, setter=_setUUIDFilterHidesSomeAssets:) BOOL UUIDFilterHidesSomeAssets;
@property (nonatomic, setter=_setExplicitlyDisableFilters:) BOOL explicitlyDisableFilters;
@property (retain, nonatomic) NSSet *allowedUUIDs;
@property (retain, nonatomic) NSArray *manualOrderUUIDs;

- (void).cxx_destruct;

@end
