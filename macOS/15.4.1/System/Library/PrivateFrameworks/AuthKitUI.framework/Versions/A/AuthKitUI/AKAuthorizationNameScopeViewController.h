@class NSTextField, NSString, AKUserInformation, NSLayoutGuide, NSArray, NSMutableArray, NSLayoutConstraint, NSButton;
@protocol AKAuthorizationNameScopeViewControllerDelegate;

@interface AKAuthorizationNameScopeViewController : NSViewController <AKNameTextFieldDelegate, NSTextFieldDelegate> {
    BOOL _isEditable;
}

@property (nonatomic) unsigned long long fieldType;
@property (nonatomic) BOOL hasClearButton;
@property (nonatomic) unsigned long long selectionStyle;
@property (copy, nonatomic) NSString *internalScopeString;
@property (copy, nonatomic) NSString *internalValueString;
@property (nonatomic) BOOL internalIsEditingName;
@property (retain, nonatomic) AKUserInformation *userInformation;
@property (retain, nonatomic) NSTextField *detailTextLabel;
@property (retain, nonatomic) NSLayoutGuide *maidCenterYLayoutGuide;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (weak, nonatomic) id<AKAuthorizationNameScopeViewControllerDelegate> delegate;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) double valueLeadingInset;
@property (copy, nonatomic) NSString *scopeString;
@property (copy, nonatomic) NSString *valueString;
@property (readonly, nonatomic) NSTextField *scopeLabel;
@property (readonly, nonatomic) NSTextField *valueLabel;
@property (copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) NSButton *clearButton;
@property (readonly, nonatomic) NSLayoutConstraint *viewHeightConstraint;
@property (nonatomic, getter=isEditingName) BOOL editingName;
@property (readonly, nonatomic) NSArray *editValueLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)controlTextDidChange:(id)a0;
- (void)loadView;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)_initTextField:(id)a0;
- (id)_addLabelWithString:(id)a0;
- (void)_delegate_didChangeEditableFieldAtIndex:(unsigned long long)a0;
- (void)_delegate_didEndEditingFieldAtIndex:(unsigned long long)a0;
- (void)_delegate_didSelectEditClear:(BOOL)a0;
- (void)_handleReturnInTextField:(id)a0;
- (unsigned long long)_indexOfEditableField:(id)a0;
- (id)_newClearTextButton;
- (id)_newNameTextField;
- (id)_newTextField;
- (id)_newValueLabelEditable:(BOOL)a0;
- (void)_setEditingNameAlphaValue:(double)a0 animated:(BOOL)a1;
- (void)_setupEditValueLabels:(unsigned long long)a0;
- (void)_setupValueLabelEditable:(BOOL)a0;
- (void)_transitionFromEditingNameAnimated:(BOOL)a0;
- (void)_transitionToEditingNameAnimated:(BOOL)a0;
- (void)addDetailTextLabelWithText:(id)a0;
- (void)handleClearText:(id)a0;
- (void)setEditingName:(BOOL)a0 animated:(BOOL)a1;
- (void)textFieldDidBecomeFirstResponder:(id)a0;

@end
