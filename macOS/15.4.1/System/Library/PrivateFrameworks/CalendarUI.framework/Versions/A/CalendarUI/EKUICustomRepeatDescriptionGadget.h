@class EKUICustomRepeatDescriptionField;

@interface EKUICustomRepeatDescriptionGadget : EKUIRepeatGadget

@property (retain) EKUICustomRepeatDescriptionField *repeatDescriptionField;

- (void).cxx_destruct;
- (id)controlView;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateWithChanges:(id)a0;

@end
