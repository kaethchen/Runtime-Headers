@class NSView, NSArray, PXMemoriesBlacklistAccessoryViewSpec;

@interface PXMemoriesBlacklistAccessoryNSView : NSView {
    double _accessoryViewAnchorXPos;
}

@property (retain, nonatomic) PXMemoriesBlacklistAccessoryViewSpec *viewSpec;
@property (retain, nonatomic) NSView *accessoryView;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_createAndAddSubview;
- (id)initWithSpec:(id)a0;
- (void)updateConstraintsWithNewAnchorXPos:(double)a0;

@end
