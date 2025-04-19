@class NSString, RTIDocumentTraits, NSPopover;
@protocol AFUIPasswordPickerDelegate;

@interface AFUIPasswordsController : NSObject <SPSystemAutoFillViewControllerDelegate, NSPopoverDelegate> {
    NSPopover *_popover;
    RTIDocumentTraits *_documentTraits;
}

@property (weak, nonatomic) id<AFUIPasswordPickerDelegate> passwordPickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)popoverDidClose:(id)a0;
- (void)passwordsViewController:(id)a0 fillPassword:(id)a1;
- (void)passwordsViewController:(id)a0 fillUsername:(id)a1;
- (void)passwordsViewController:(id)a0 fillVerificationCode:(id)a1;
- (void)passwordsViewController:(id)a0 selectedCredential:(id)a1;
- (void)passwordsViewControllerDidCancel:(id)a0;
- (id)initWithDocumentTraits:(id)a0;
- (id)makePasswordPickerViewController;
- (void)passwordViewController:(id)a0 fillText:(id)a1;
- (void)presentPasswordPickerFromViewController:(id)a0 didFinishAuthenticationBlock:(id /* block */)a1;

@end
