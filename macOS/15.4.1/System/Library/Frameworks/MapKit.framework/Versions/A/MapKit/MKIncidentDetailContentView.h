@class GEOComposedRouteAdvisoryItem, GEOAdvisoryItem;
@protocol MKIncidentDetailDelegate;

@interface MKIncidentDetailContentView : NSView {
    GEOComposedRouteAdvisoryItem *_advisoryItem;
    GEOAdvisoryItem *_advisoryNoticeItem;
}

@property (weak, nonatomic) id<MKIncidentDetailDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_clearChildrenStackView;
- (void)configureWithAdvisories:(id)a0 artwork:(id)a1;
- (void)configureWithAdvisoryItem:(id)a0;

@end
