@class NSString, EKUIPopUpButton;

@interface EKUIStatusGadget : EKUILabeledGadget <NSMenuDelegate>

@property (retain) EKUIPopUpButton *statusPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (double)baselineOffset;
- (BOOL)isEditable;
- (void)menu:(id)a0 willHighlightItem:(id)a1;
- (void)menuDidClose:(id)a0;
- (BOOL)needsExpansion;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)addMenuItemForStatus:(long long)a0 withTitle:(id)a1;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (void)statusChanged:(id)a0;
- (id)statusImageForStatus:(long long)a0 selected:(BOOL)a1;
- (void)updateWithChanges:(id)a0;

@end
