@class NSTextField, NSString, NSMorphology, IPCustomPronounSheetController;

@interface IPPronounPickerPronounInfo : NSObject <NSTextFieldDelegate>

@property (weak, nonatomic) IPCustomPronounSheetController *sheetController;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *validationErrorMessage;
@property (retain, nonatomic) NSTextField *entryField;
@property (retain, nonatomic) NSTextField *exampleLabel;
@property (retain, nonatomic) NSString *exampleText;
@property (retain, nonatomic) NSString *examplePlaceholder;
@property (retain, nonatomic) NSMorphology *morphology;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL textWasEnteredByUser;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly, nonatomic) BOOL hasErrorMessage;
@property (readonly, nonatomic) BOOL hasValidValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)autofillValue:(id)a0;
- (id)createViews;
- (id)generateExampleLabelText;
- (void)handleControlTextDidChange;
- (id)initWithSheetController:(id)a0 exampleText:(id)a1 examplePlaceholder:(id)a2 morphology:(id)a3 language:(id)a4;

@end
