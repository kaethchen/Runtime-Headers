@interface AMPDesktopUI.TracklistTrackLockup : NSCollectionViewItem {
    void /* unknown type, empty encoding */ columnConfig;
    void /* unknown type, empty encoding */ selectionPosition;
    void /* unknown type, empty encoding */ favoriteCell;
    void /* unknown type, empty encoding */ playStateCell;
    void /* unknown type, empty encoding */ titleCell;
    void /* unknown type, empty encoding */ downloadStateCell;
    void /* unknown type, empty encoding */ durationCell;
    void /* unknown type, empty encoding */ actionCell;
    void /* unknown type, empty encoding */ selectionHighlight;
    void /* unknown type, empty encoding */ rollover;
}

@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)isSelected;
- (void)loadView;

@end
