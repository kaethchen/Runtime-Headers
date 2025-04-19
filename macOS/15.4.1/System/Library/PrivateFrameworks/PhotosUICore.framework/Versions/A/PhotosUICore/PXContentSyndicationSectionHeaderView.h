@class SLHighlight, PXPhotosSectionHeaderLayoutSpec;
@protocol PXContentSyndicationSectionHeaderViewDelegate;

@interface PXContentSyndicationSectionHeaderView : UXView

@property (retain, nonatomic) SLHighlight *socialLayerHighlight;
@property (retain, nonatomic) PXPhotosSectionHeaderLayoutSpec *spec;
@property (weak, nonatomic) id<PXContentSyndicationSectionHeaderViewDelegate> delegate;

- (void).cxx_destruct;

@end
