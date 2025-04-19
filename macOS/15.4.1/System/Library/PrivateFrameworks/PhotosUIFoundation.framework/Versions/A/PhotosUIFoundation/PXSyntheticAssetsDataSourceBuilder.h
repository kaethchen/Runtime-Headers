@class NSArray, NSString, NSMutableArray;

@interface PXSyntheticAssetsDataSourceBuilder : NSObject <PXSyntheticDataSourceBuilder> {
    NSMutableArray *_mutableAssetsBySection;
    NSMutableArray *_mutableAssetCollections;
}

@property (readonly, nonatomic) NSArray *assetsBySection;
@property (readonly, nonatomic) NSArray *assetCollections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
