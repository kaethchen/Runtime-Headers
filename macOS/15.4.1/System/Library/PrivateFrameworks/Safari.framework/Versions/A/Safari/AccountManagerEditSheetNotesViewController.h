@class NSTextField, NSScrollView, NSString, NSTextView;
@protocol AccountManagerEditSheetNotesViewControllerDelegate;

@interface AccountManagerEditSheetNotesViewController : NSViewController <NSTextViewDelegate>

@property (weak, nonatomic) NSTextField *label;
@property (weak, nonatomic) NSScrollView *textViewScrollView;
@property (weak, nonatomic) NSTextView *textView;
@property (weak, nonatomic) id<AccountManagerEditSheetNotesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)viewDidLoad;

@end
