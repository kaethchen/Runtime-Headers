@class MKPlaceSectionView, NSString;

@interface MKPlaceSectionViewController : _MKUIViewController <_MKAnimationStackViewDelegate, MKPlaceSectionViewDelegate>

@property (readonly, nonatomic) MKPlaceSectionView *sectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)sectionView:(id)a0 didDeselectRow:(id)a1 atIndex:(unsigned long long)a2;
- (void)sectionView:(id)a0 didSelectFooter:(id)a1;
- (void)sectionView:(id)a0 didSelectHeader:(id)a1;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (void)stackViewNeedsLayout:(id)a0;

@end
