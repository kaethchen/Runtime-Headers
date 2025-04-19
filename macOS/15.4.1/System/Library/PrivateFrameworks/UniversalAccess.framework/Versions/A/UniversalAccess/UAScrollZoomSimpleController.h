@class NSButton, NSComboBox, UAModifiersController;

@interface UAScrollZoomSimpleController : NSObject {
    NSButton *ScrollZoomCheckBox;
    NSComboBox *ModifiersComboBox;
    BOOL _didAwakeFromNib;
    UAModifiersController *_modifiersController;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_update;
- (void)awakeFromNib;
- (void)_handlePreferencesChange:(id)a0;
- (void)_registerForNotifiations;
- (id)fieldEditorToObject:(id)a0;
- (id)initWithCheckBox:(id)a0 andComboBox:(id)a1;
- (void)scrollZoomCheckBoxPressed:(id)a0;

@end
