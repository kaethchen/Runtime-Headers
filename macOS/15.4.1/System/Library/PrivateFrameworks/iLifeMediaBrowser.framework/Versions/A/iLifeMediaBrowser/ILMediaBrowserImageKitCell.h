@interface ILMediaBrowserImageKitCell : IKImageBrowserCell {
    BOOL _isProject;
    id _representedObject;
}

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (BOOL)isSelectable;
- (id)representedObject;
- (void)installToolTips;
- (BOOL)contentCanBePlayed;
- (void)didImport;
- (void)drawImageOutline;
- (void)drawOverlays;
- (void)drawSelection;
- (void)drawShadow;
- (void)drawTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameForCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameForImageContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)showPlayerControls;
- (id)_bestImageRepresentation:(id)a0;
- (void)drawOverlayBadgesWithPlugin:(id)a0 mediaGroups:(id)a1;
- (void)drawOverlayImagesWithPlugin:(id)a0 mediaGroups:(id)a1;
- (void)drawOverlaySelection;
- (long long)insetForImovieMediaObject:(id)a0;

@end
