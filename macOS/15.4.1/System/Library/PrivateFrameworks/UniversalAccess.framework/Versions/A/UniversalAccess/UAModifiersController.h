@class NSComboBox, UAModifiersEditor, NSString;

@interface UAModifiersController : NSObject <NSComboBoxDelegate, NSComboBoxDataSource>

@property (retain, nonatomic) NSComboBox *_modifiersComboBox;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) UAModifiersEditor *modifiersFieldEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)comboBox:(id)a0 indexOfItemWithStringValue:(id)a1;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (void)comboBoxSelectionDidChange:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (long long)numberOfItemsInComboBox:(id)a0;
- (void)update;
- (void)_setComboBox:(id)a0 stringValue:(id)a1;
- (id)initWithComboBox:(id)a0;

@end
