@class NSImageView, CalUIListViewCellBackground, EKEvent, CalUILabel;

@interface CalUIListViewAllDayEventCell : CalUIListViewCell {
    CalUILabel *_titleField;
    CalUIListViewCellBackground *_backgroundView;
    NSImageView *_imageView;
    CalUILabel *_dateField;
    EKEvent *_event;
}

- (void).cxx_destruct;
- (id)event;
- (id)_titleFont;
- (void)updateLayer;
- (void)updateWithEvent:(id)a0;
- (void)setDimmed:(BOOL)a0;
- (void)_updateColors;
- (id)_monospacedSubtextFont;
- (void)_updateTextAndIconColors;
- (long long)_userInterfaceStyle;
- (id)initForDragPreview:(BOOL)a0;

@end
