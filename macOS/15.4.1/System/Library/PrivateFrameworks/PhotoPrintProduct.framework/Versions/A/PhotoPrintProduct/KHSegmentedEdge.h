@class KHAsset;

@interface KHSegmentedEdge : KHSegmentedPart {
    KHAsset *_spacerAsset;
}

@property long long spacerAssetId;
@property float imageOffset;
@property float beginOffset;
@property float endOffset;
@property float spacerMinimum;
@property BOOL tile;
@property float scaledSpacerMinimum;
@property float scaledOffset;
@property float scaledBeginOffset;
@property float scaledEndOffset;

- (void)dealloc;
- (id)spacerAsset;

@end
