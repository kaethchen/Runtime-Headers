@class NSArray;

@interface MusicUI.PlaylistTrackLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ contentDescriptor;
    void /* unknown type, empty encoding */ groupedInteractionIsHovered;
    void /* unknown type, empty encoding */ dragAndDropPresenter;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ isDisabled;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ indexPath;
    void /* unknown type, empty encoding */ favoriteView;
    void /* unknown type, empty encoding */ isSectionGrouped;
    void /* unknown type, empty encoding */ isHovered;
}

@property (nonatomic) BOOL selected;
@property (nonatomic, readonly) NSArray *draggingImageComponents;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityRole;
- (BOOL)isSelected;
- (void)loadView;
- (void)viewWillLayout;

@end
