@class _BKAggregatedAssetData, NSDictionary, NSURL, NSData, BKAssetMetadata;

@interface _BKAggregatedAssetMetadata : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) BKAssetMetadata *opfMetadata;
@property (retain, nonatomic) BKAssetMetadata *iTunesMetadata;
@property (retain, nonatomic) BKAssetMetadata *preloadedMetadata;
@property (retain, nonatomic) NSDictionary *sinfOptions;
@property (retain, nonatomic) NSData *coverImageData;
@property (retain, nonatomic) _BKAggregatedAssetData *aggregateData;
@property (readonly, nonatomic) BKAssetMetadata *combinedMetadata;

- (id)init;
- (void).cxx_destruct;
- (void)_populatePackageHashOnMetadata:(id)a0;
- (id)initWithURL:(id)a0 opfMetadata:(id)a1 aggregateData:(id)a2;

@end
