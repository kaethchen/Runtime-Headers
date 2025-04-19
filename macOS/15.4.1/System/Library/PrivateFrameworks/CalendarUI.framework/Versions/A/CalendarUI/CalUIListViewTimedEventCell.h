@class NSImageView, CalUIListViewCellBackground, CalUILayerBackedView, EKEvent, NSStackView, CalUILabel;

@interface CalUIListViewTimedEventCell : CalUIListViewCell {
    NSImageView *_travelImage;
    CalUILabel *_travelField;
    CalUILabel *_travelTimeField;
    NSStackView *_travelStack;
    CalUILabel *_titleField;
    CalUILabel *_topTimeField;
    NSStackView *_titleStack;
    NSImageView *_locationImage;
    CalUILabel *_locationField;
    CalUILabel *_bottomTimeField;
    NSStackView *_locationStack;
    CalUIListViewCellBackground *_backgroundView;
    NSStackView *_textContentView;
    CalUILayerBackedView *_colorBarView;
    EKEvent *_event;
}

- (void).cxx_destruct;
- (id)event;
- (id)_titleFont;
- (void)updateLayer;
- (void)setDimmed:(BOOL)a0;
- (void)_updateColors;
- (id)_attributedStringFromAttributedString:(id)a0 strikethrough:(BOOL)a1;
- (id)_attributedStringFromString:(id)a0 strikethrough:(BOOL)a1 font:(id)a2;
- (id)_monospacedSubtextFont;
- (id)_subtextFont;
- (void)_updateTextAndIconColors;
- (long long)_userInterfaceStyle;
- (id)initForDragPreview:(BOOL)a0;
- (void)updateWithEvent:(id)a0 isMultiday:(BOOL)a1 occurrenceStartDate:(id)a2;

@end
