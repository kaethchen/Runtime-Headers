@interface MusicUI.ColumnHeaderView : MusicUI.FlippedView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ firstColumnLabel;
    void /* unknown type, empty encoding */ secondColumnLabel;
    void /* unknown type, empty encoding */ thirdColumnLabel;
    void /* unknown type, empty encoding */ durationLabel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
