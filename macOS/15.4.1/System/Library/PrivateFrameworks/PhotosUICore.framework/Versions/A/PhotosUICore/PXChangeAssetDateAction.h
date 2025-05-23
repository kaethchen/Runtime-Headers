@class NSTimeZone, NSDictionary, NSDate;

@interface PXChangeAssetDateAction : PXAssetsAction

@property (readonly, nonatomic) NSDate *changeDate;
@property (readonly, nonatomic) double dateOffset;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSDictionary *originalDateByLocalIdentifier;
@property (retain, nonatomic) NSDictionary *originalTimeZoneByLocalIdentifier;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (void)_setDate:(id)a0 timeZone:(id)a1 forAsset:(id)a2;
- (id)_timeZoneForAsset:(id)a0;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)a0 date:(id)a1 timeZone:(id)a2;
- (id)initWithAssets:(id)a0 dateOffset:(double)a1 timeZone:(id)a2;

@end
