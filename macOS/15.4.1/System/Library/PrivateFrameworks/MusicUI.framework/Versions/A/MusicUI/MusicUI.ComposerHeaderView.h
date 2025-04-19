@interface MusicUI.ComposerHeaderView : MusicUI.FlippedView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ groupedInteractionIsHovered;
    void /* unknown type, empty encoding */ contentDescriptor;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ trackTextView;
    void /* unknown type, empty encoding */ indexPath;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ durationLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playPauseButton;
    void /* unknown type, empty encoding */ contextualActionButton;
    void /* unknown type, empty encoding */ isHovered;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
