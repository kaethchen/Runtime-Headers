@class WBSFormMetadata;

@interface WBSFormMetadataController : NSObject {
    struct HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::unique_ptr<SafariShared::FrameMetadata>>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::ShouldValidateKey::Yes> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _framesToMetadataMap;
    WBSFormMetadata *_cachedFormMetadata;
}

@property (nonatomic) unsigned long long pageTestType;

+ (id)classifyFormMetadata:(id)a0;
+ (BOOL)convertNumber:(id)a0 toFormMetadataRequestType:(unsigned long long *)a1;
+ (id)formMetadataClassificationJS;
+ (BOOL)manualAutoFillButtonWillFitInFieldWithMetadata:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_unlockMetadataForForm:(id)a0 inFrame:(id)a1;
- (void)autoFilledField:(id)a0 inForm:(id)a1 inFrame:(id)a2;
- (id)_formMetadataByAddingInformationAboutUserEditedStateForUserNameAndPasswordFieldsToFormMetadata:(id)a0 inFrame:(id)a1;
- (struct OpaqueJSValue { } *)_jsObjectForForm:(id)a0 inFrame:(id)a1;
- (void)_lockMetadataForForm:(id)a0 inFrame:(id)a1;
- (void)annotateForm:(double)a0 inFrame:(id)a1 withValues:(id)a2;
- (void)autoFillFormInFrame:(id)a0 withValues:(id)a1 fillSynchronously:(BOOL)a2 setAutoFilled:(BOOL)a3 focusFieldAfterFilling:(BOOL)a4 fieldToFocus:(id)a5 fieldsToObscure:(id)a6 fillAllCharactersAtOnce:(BOOL)a7 submitForm:(BOOL)a8;
- (BOOL)autoFillFrameIsValid:(id)a0;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)a0 withValue:(id)a1 shouldSubmit:(BOOL)a2;
- (void)autoFilledField:(id)a0 inFrame:(id)a1;
- (void)automaticPasswordSheetDimissedInFrame:(id)a0 focusedPasswordControlUniqueID:(id)a1;
- (void)clearField:(id)a0 inFrame:(id)a1;
- (void)clearFieldsAndSetFormControlsToNotAutoFilled:(id)a0 inFrame:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearMetadataForFrame:(id)a0;
- (void)clearScriptWorld;
- (void)countUserEditedTextControlsInFrame:(id)a0 textFields:(unsigned long long *)a1 textAreas:(unsigned long long *)a2;
- (void)disableSpellCheckInField:(id)a0 inFrame:(id)a1;
- (void)fillField:(id)a0 inFrame:(id)a1 withGeneratedPassword:(id)a2;
- (id)fillForm:(double)a0 inFrame:(id)a1 withPassword:(id)a2 focusedFieldControlID:(id)a3;
- (void)finishedAutoFillingForm:(id)a0 inFrame:(id)a1 shouldSubmit:(BOOL)a2;
- (void)finishedAutoFillingOneTimeCode:(id)a0 inFrame:(id)a1 shouldSubmit:(BOOL)a2;
- (void)focusControlForStreamlinedLogin:(id)a0 inFrame:(id)a1;
- (id)formAutoFillNodeForField:(id)a0 inFrame:(id)a1;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (id)formElementWithFormID:(double)a0 inFrame:(id)a1;
- (id)formMetadataControlsByAddingAdditionalControlInformationToFormMetadata:(id)a0 inFrame:(id)a1 inContext:(struct OpaqueJSContext { } *)a2 withControlMetadataContainingAdditionalControlInformation:(id)a3;
- (id)formSubmissionURLStringForSearchTextField:(id)a0 inFrame:(id)a1 useStrictDetection:(BOOL)a2;
- (void)getMetadataForAllFormsInPageWithMainFrame:(id)a0 requestType:(unsigned long long)a1 frames:(id *)a2 formMetadata:(id *)a3;
- (void)getMetadataForTextField:(id)a0 inFrame:(id)a1 completionHandler:(id /* block */)a2;
- (void)getMetadataForTextField:(id)a0 inFrame:(id)a1 textFieldMetadata:(id *)a2 formMetadata:(id *)a3 requestType:(unsigned long long)a4;
- (BOOL)isFrameAnnotated:(id)a0;
- (BOOL)isFrameOrChildAnnotated:(id)a0;
- (id)metadataForActiveFormInPageWithMainFrame:(id)a0;
- (id)metadataForForm:(id)a0 inFrame:(id)a1 requestType:(unsigned long long)a2;
- (id)metadataForForm:(id)a0 inFrame:(id)a1 requestType:(unsigned long long)a2 addUserEditedStateForUserNameAndPasswordFields:(BOOL)a3;
- (void *)metadataForFrame:(id)a0 requestType:(unsigned long long)a1;
- (BOOL)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)a0;
- (void)recursivelyClearMetadataForFrames:(id)a0;
- (BOOL)recursivelyCollectAncestorFramesOfFrame:(id)a0 startingFromFrame:(id)a1 ancestorFrames:(id)a2;
- (void)recursivelyCollectMetadataInFrame:(id)a0 requestType:(unsigned long long)a1 frames:(id)a2 formMetadata:(id)a3;
- (void)recursivelyCountUserEditedTextControlsInFrame:(id)a0 textFields:(unsigned long long *)a1 textAreas:(unsigned long long *)a2;
- (void)removeAutomaticPasswordElementsInFrame:(id)a0 focusedPasswordControlUniqueID:(id)a1 passwordControlUniqueIDs:(id)a2 blurAfterRemoval:(BOOL)a3;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)a0 passwordControlUniqueIDs:(id)a1;
- (void)replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inField:(id)a1 inFrame:(id)a2 withString:(id)a3 andSelectTailStartingAt:(unsigned long long)a4;
- (void)selectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inField:(id)a1 inFrame:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRangeInField:(id)a0 inFrame:(id)a1;
- (void)setAutoFillSpinnerVisibility:(BOOL)a0 textFieldMetadata:(id)a1 frame:(id)a2;
- (void)setFormControls:(id)a0 inFrame:(id)a1 asAutoFilled:(BOOL)a2;
- (void)setStrongPasswordElementViewableIfAppropriate:(BOOL)a0 frame:(id)a1 passwordControlUniqueIDs:(id)a2;
- (id)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)a0 formID:(double)a1 focusedPasswordControlUniqueID:(id)a2 passwordControlUniqueIDs:(id)a3 automaticPassword:(id)a4 blurAfterSubstitution:(BOOL)a5;
- (void)textFieldBlurred:(id)a0 inFrame:(id)a1 page:(id)a2 textFieldMetadata:(id)a3 formMetadata:(id)a4;
- (void)textFieldFocused:(id)a0 inFrame:(id)a1 textFieldMetadata:(id)a2 formMetadata:(id)a3;
- (id)uniqueIDForTextField:(id)a0 inFrame:(id)a1;
- (unsigned long long)userEditedTextControlCountInArray:(struct OpaqueJSValue { } *)a0 context:(struct OpaqueJSContext { } *)a1 expectTextFieldsRatherThanTextAreas:(BOOL)a2;
- (id)visibleNonEmptyTextFieldsInForm:(id)a0 inFrame:(id)a1;
- (void)willSendSubmitEventForForm:(id)a0 inFrame:(id)a1;
- (void)willSubmitForm:(id)a0 inFrame:(id)a1;

@end
