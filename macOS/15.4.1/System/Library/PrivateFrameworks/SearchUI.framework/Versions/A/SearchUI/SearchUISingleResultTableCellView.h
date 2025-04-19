@class TLKLabel, NSString, SearchUIImageView;

@interface SearchUISingleResultTableCellView : TLKTableCellView <NUIContainerViewDelegate>

@property (retain, nonatomic) SearchUIImageView *thumbnailView;
@property (retain, nonatomic) TLKLabel *titleView;
@property (retain, nonatomic) TLKLabel *secondaryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;

@end
