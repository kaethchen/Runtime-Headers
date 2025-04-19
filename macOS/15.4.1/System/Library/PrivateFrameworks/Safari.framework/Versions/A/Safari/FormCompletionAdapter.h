@class WBSCreditCardData, NSView, NSURL, NSWindow;

@interface FormCompletionAdapter : NSObject <FormCompletionPresentationContext, FormCompletionDelegate>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, weak, nonatomic) NSWindow *window;
@property (readonly, nonatomic) NSView *browserView;
@property (readonly, nonatomic) struct Frame { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } frame;
@property (readonly, nonatomic) BOOL shouldSaveUsernamesAndPasswords;
@property (readonly, nonatomic) BOOL shouldSavePasswordsToCloudKeychain;
@property (readonly, nonatomic) WBSCreditCardData *lastFilledCreditCard;

+ (id)adapterWithWindow:(id)a0 frame:(const void *)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)formCompletion:(void *)a0 collectFormMetadataForSafeAutoFillConfirmationContactProperty:(id)a1 contractIdentifier:(id)a2 contactLabel:(id)a3;
- (void)formCompletion:(void *)a0 fillFormWithPassword:(id)a1 formMetadata:(id)a2;
- (BOOL)formCompletion:(void *)a0 fillFormWithSuggestedPassword:(id)a1 formMetadata:(id)a2;
- (void)formCompletion:(void *)a0 fillFormWithValues:(id)a1 autoFillType:(long long)a2;
- (void)formCompletion:(void *)a0 fillFormWithValues:(id)a1 fieldToFocus:(id)a2 autoFillType:(long long)a3 shouldSubmit:(BOOL)a4;
- (void)formCompletion:(void *)a0 fillHideMyEmailRecord:(id)a1 formMetadata:(id)a2;
- (void)formCompletion:(void *)a0 fillOneTimeCodeFieldsWithValue:(id)a1 shouldSubmit:(BOOL)a2;
- (id)initWithWindow:(id)a0 frame:(const void *)a1;
- (void)savedAccountMatchesWithPartialUsername:(id)a0 completionHandler:(id /* block */)a1;

@end
