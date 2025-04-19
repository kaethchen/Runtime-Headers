@class NSString, IASLocalSecretPrompt;

@interface MMPromptForLocalSecret : NSObject <IASLocalSecretDelegate> {
    IASLocalSecretPrompt *_promptController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)userFullName;
- (void)getLocalSecretWithWindow:(id)a0 withTitle:(id)a1 withMessage:(id)a2 withCompletion:(id /* block */)a3;
- (void)secretEntered:(id)a0;
- (void)secretEntryCancelled;
- (void)getLocalSecretWithWindow:(id)a0 withCompletion:(id /* block */)a1;
- (void)getLocalSecretWithWindow:(id)a0 withTitle:(id)a1 withMessage:(id)a2 withSheetIcon:(id)a3 withCompletion:(id /* block */)a4;

@end
