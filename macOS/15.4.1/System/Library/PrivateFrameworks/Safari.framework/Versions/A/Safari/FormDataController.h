@class NSMutableDictionary, NSString, AutoFillLocalAuthenticationManager, WBSFormAutoFillCorrectionManager, AutoFillAuthorizationController, WBSFormAutoFillParsecFeedbackProcessor, WBSCoalescedAsynchronousWriter;
@protocol WBSEncryptionProvider;

@interface FormDataController : WBSFormDataController <WBSFormAutoFillCorrectionManagerDelegate, WBSFormFieldClassificationCorrectorDelegate> {
    WBSCoalescedAsynchronousWriter *_formDataWriter;
    WBSFormAutoFillCorrectionManager *_autoFillCorrectionManager;
    WBSFormAutoFillParsecFeedbackProcessor *_autoFillFeedbackProcessor;
    AutoFillAuthorizationController *_autoFillAuthorizationController;
    id<WBSEncryptionProvider> _encryptionProvider;
    NSMutableDictionary *_threadUnsafeDeniedCredentialsByProtectionSpace;
}

@property (class, readonly, copy, nonatomic) NSString *titleTextForSavingNewPassword;
@property (class, readonly, copy, nonatomic) NSString *detailTextForSavingNewPassword;

@property (readonly, nonatomic) AutoFillLocalAuthenticationManager *localAuthenticationManager;
@property (nonatomic) BOOL hasAuthenticatedForPasswordAutoFillInClamshellMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)contactIsMe:(id)a0;
+ (id)localizedLowercaseContactProperty:(id)a0;
+ (BOOL)isAddressBookPropertyAnAddressProperty:(id)a0;
+ (unsigned long long)numberOfTextFieldsInForm:(id)a0;
+ (id)sharedFormDataController;

- (void).cxx_destruct;
- (void)warmUp;
- (id)addressBookMatchesForProperty:(id)a0 key:(id)a1 label:(id)a2;
- (id)addressBookMatchesForProperty:(id)a0 key:(id)a1 label:(id)a2 partialString:(id)a3 contact:(id)a4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)a5;
- (BOOL)autoFillCorrectionManagerShouldProcessFeedback:(id)a0;
- (id)completionDBPath;
- (void)domainsWithPreviousDataChanged;
- (id)encryptOrDecryptData:(id)a0 encrypt:(BOOL)a1;
- (id)feedbackProcessorForAutoFillCorrectionManager:(id)a0;
- (id)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(id)a0;
- (id)formFieldClassificationCorrector:(id)a0 bestAddressBookLabelForControlValue:(id)a1;
- (BOOL)formFieldClassificationCorrector:(id)a0 hasAddressBookDataForAddressBookLabel:(id)a1;
- (BOOL)hasUserDeniedAccessToCredential:(id)a0 inProtectionSpace:(id)a1;
- (id)initWithAggressiveKeychainCaching:(BOOL)a0;
- (void)saveCompletionDBSoon;
- (void)savePendingChangesBeforeTermination;
- (BOOL)shouldAutoFillFromAddressBook;
- (BOOL)shouldAutoFillFromPreviousData;
- (BOOL)shouldAutoFillPasswords;
- (BOOL)shouldForceUSLocaleForAutoFillFillingTest;
- (id)substituteCredential:(id)a0 inProtectionSpace:(id)a1;
- (id)uniqueIDOfContact:(id)a0;
- (BOOL)_shouldSynchronizeKeychainItems;
- (id)noAutoFillDialogTitleForResult:(int)a0;
- (id)_addressBookMatchesForValue:(id)a0 property:(id)a1 key:(id)a2 label:(id)a3 contact:(id)a4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)a5;
- (id)_autoFillCorrectionManager;
- (id)_ensureKeychainEncryptionProvider;
- (void)_findAllContactsWithSameFullNameAsContact:(id)a0 andGetValuesForContactFormWithCompletionController:(void *)a1 metadata:(id)a2 inDomain:(id)a3 contactLabel:(id)a4;
- (void)_handleCredentialAutoFillActionWithSuccess:(BOOL)a0 shouldSubmit:(BOOL)a1 browserViewController:(id)a2 frameHandle:(id)a3 mainFrameHandle:(id)a4 autoFillValues:(id)a5 formMetadata:(id)a6;
- (id)_mutableSetForWBSAddressBookMatches;
- (unsigned long long)_numberOfAddressBookAutoFillableFieldsInControls:(id)a0;
- (unsigned long long)_numberOfAddressBookElementsInControls:(id)a0;
- (id)_peopleWithWBSABProperty:(id)a0 containingPrefix:(id)a1 contactStore:(id)a2;
- (int)_performCredentialAutoFillActionForForm:(id)a0 ofType:(unsigned long long)a1 inViewController:(id)a2 isUserInitiated:(BOOL)a3 frame:(const void *)a4;
- (BOOL)_processCorrectionsIfPossibleForSourceFrame:(const void *)a0 formMetadata:(id)a1 formValues:(id)a2;
- (void)_saveFormDataIfNecessary:(id)a0 page:(const void *)a1 frame:(const void *)a2 sourceFrame:(const void *)a3 values:(id)a4 forceConfirmationIfOverwritingSavedAccount:(BOOL)a5 passwordGenerationCredentials:(id)a6 completionHandler:(id /* block */)a7;
- (BOOL)_savingFormDataIsAllowedInFrame:(const void *)a0 dataContainsGeneratedPassword:(BOOL)a1;
- (BOOL)_shouldSaveCreditCardDataInFrame:(const void *)a0;
- (BOOL)_shouldSaveFormDataInFrame:(const void *)a0;
- (BOOL)_shouldSaveUsernamesAndPasswordsInFrame:(const void *)a0 isGeneratedPassword:(BOOL)a1;
- (id)addressBookMatchesForProperty:(id)a0 key:(id)a1 label:(id)a2 contact:(id)a3 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)a4;
- (void)autoFillActiveFormOrBestFormForPageLevelAutoFillInViewController:(id)a0 metadataProvider:(id)a1 autoFillDataType:(long long)a2 contactLabel:(id)a3 multiRoundAutoFillManager:(id)a4 contact:(id)a5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)a6;
- (id)autogeneratedPasswordForURL:(id)a0 frame:(const void *)a1 formMetadata:(id)a2 textField:(id)a3;
- (BOOL)canSaveGeneratedPasswordsForURL:(id)a0;
- (void)clearClamshellAuthenticationOverrideIfNecessary:(id)a0;
- (void)displayInternetAccountSetupPromptForFrame:(const void *)a0 sourceFrame:(const void *)a1 userName:(id)a2 password:(id)a3;
- (void)displayNoAutoFillDialogForBrowserContentViewController:(id)a0 result:(int)a1;
- (BOOL)formContainsInformationToSave:(id)a0;
- (id)localizedAddressBookDescriptionForTextField:(id)a0;
- (BOOL)mayPrefillInFrame:(const void *)a0;
- (id)noAutoFillDialogDetailTextForResult:(int)a0;
- (void)notifyKeychainWasDirectlyAffectedBySafari:(id)a0;
- (void)offerToSaveCredentialsFromForm:(id)a0 forFrame:(const void *)a1 passwordGenerationCredentials:(id)a2 completionHandler:(id /* block */)a3;
- (id)preferredAddressLabel;
- (id)preferredAddressLabelForContact:(id)a0;
- (void)saveCreditCardDataIfNecessary:(id)a0 frame:(const void *)a1 sourceFrame:(const void *)a2 exitHandler:(struct ScopeExitHandler { id /* block */ x0; } *)a3;
- (void)saveUnsubmittedFormDataFromRemovedFrameIfNecessary:(id)a0 page:(const void *)a1 frame:(const void *)a2 sourceFrame:(const void *)a3 passwordGenerationCredentials:(id)a4;
- (int)sendAutoFillDataForStandardForm:(id)a0 inViewController:(id)a1 frame:(const void *)a2 autoFillDataType:(long long)a3 contactLabel:(id)a4 multiRoundAutoFillManager:(id)a5 contact:(id)a6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)a7;
- (BOOL)shouldDeferLoadingWhileSavingFormDataInPage:(const void *)a0 frame:(const void *)a1 sourceFrame:(const void *)a2 formMetadata:(id)a3 passwordGenerationCredentials:(id)a4;
- (BOOL)shouldOfferAddressBookAutoFillInTextField:(id)a0 formMetadata:(id)a1;
- (BOOL)shouldSaveUsernamesAndPasswordsInFrame:(const void *)a0;
- (void)showFlexibleContactsAutoFillUIForCompletionController:(void *)a0 metadataProvider:(id)a1 contactLabel:(id)a2;
- (id)uniqueIDOfMe;
- (void)verifyKeychainAccessWithContentViewController:(id)a0;
- (void)willSubmitFormInPage:(const void *)a0 toFrame:(const void *)a1 fromFrame:(const void *)a2 values:(id)a3 userData:(const void *)a4 listener:(const void *)a5;
- (void)willSubmitFormWithCredentials:(id)a0 shouldPreferAnnotatedCredentials:(BOOL)a1 toFrame:(const void *)a2 fromFrame:(const void *)a3 forceConfirmationIfOverwritingSavedAccount:(BOOL)a4 passwordGenerationCredentials:(id)a5 completionHandler:(id /* block */)a6;
- (void)willSubmitStandardForm:(id)a0 values:(id)a1 toFrame:(const void *)a2 fromFrame:(const void *)a3 completionHandler:(id /* block */)a4;

@end
