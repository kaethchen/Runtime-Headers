@class NSArray;

@interface MusicUI.SquareLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ overlayConfiguration;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ dragAndDropPresenter;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ contentDescriptor;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ headlineLabel;
    void /* unknown type, empty encoding */ explicitBadge;
    void /* unknown type, empty encoding */ favoriteBadge;
    void /* unknown type, empty encoding */ accessoryView;
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ isValid;
    void /* unknown type, empty encoding */ scopeIdentifier;
    void /* unknown type, empty encoding */ itemIdentifier;
    void /* unknown type, empty encoding */ editableFormCoordinator;
    void /* unknown type, empty encoding */ squareLockup;
}

@property (nonatomic, readonly) NSArray *draggingImageComponents;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityRole;
- (void)loadView;
- (void)viewWillLayout;

@end
