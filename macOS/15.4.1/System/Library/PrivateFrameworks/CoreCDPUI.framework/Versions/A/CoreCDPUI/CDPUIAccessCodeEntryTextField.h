@class NSString, NSSet, NSTextStorage, NSTextView;
@protocol CDPUIAccessCodeEntryTextFieldDelegate;

@interface CDPUIAccessCodeEntryTextField : NSTextView <NSTextViewDelegate> {
    NSSet *_separatorLocations;
    NSSet *_separatorDeleteLocations;
}

@property (class, readonly, nonatomic) unsigned long long accessKeyCharacterCount;
@property (class, readonly, nonatomic) unsigned long long wrappingKeyCharacterCount;

@property (retain, nonatomic) NSTextStorage *localTextStorage;
@property (retain, nonatomic) NSTextStorage *placeholderTextStorage;
@property (retain, nonatomic) NSTextView *placeholderTextView;
@property (copy, nonatomic) NSString *placeholder;
@property (weak, nonatomic) id<CDPUIAccessCodeEntryTextFieldDelegate> accessCodeInputDelegate;
@property (readonly) BOOL isComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didChangeText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (id)text;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textViewDidChangeSelection:(id)a0;
- (void)viewDidMoveToWindow;
- (void)setText:(id)a0;
- (void)setupUI;
- (void)_becomeFirstResponder;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)_handleMultiCharacterStringInput:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)_numberOfSeparators;
- (id)_sanitizeInputString:(id)a0;
- (unsigned long long)_totalCharacterLimit;
- (void)setupSeparatorLocations;
- (void)updatePlaceholderVisibility;

@end
