@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    BOOL _isSuspended;
    BOOL _choseSecondaryPrev;
}

@property (nonatomic) BOOL choseSecondary;
@property (nonatomic) BOOL isFreezingInputMethodChoice;
@property (readonly, nonatomic) BOOL shouldDynamicallySwitchBetweenPrimaryAndSecondary;
@property (nonatomic) long long indexOfLastDynamicSwitch;

- (void)resume;
- (void)suspend;
- (void)clearInput;
- (id)keyboardConfiguration;
- (id)candidateArray:(id)a0 withCandidateUniquelyInsertedToFront:(id)a1;
- (void)chooseBetterInputMethod;
- (BOOL)containsActiveLanguage:(id)a0 language:(id)a1;
- (void)didUpdateInputModeProbabilities:(id)a0;
- (void)didUpdateInputModes:(id)a0;
- (BOOL)emphasizesAlternativeInput;
- (void)enumerateInputModesWithBlock:(id /* block */)a0;
- (unsigned int)externalIndexToInternal:(unsigned int)a0;
- (id)externalStringToInternal:(id)a0;
- (id)getBetterLexiconLocale:(BOOL *)a0;
- (id)getCurrentExternalStringGiven:(BOOL)a0;
- (id)getPlainCandidate;
- (void)handleAlternativeInput:(id)a0 givenCandidate:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (unsigned int)internalIndexToExternal:(unsigned int)a0;
- (id)internalStringToExternal:(id)a0;
- (BOOL)isHighMemoryManager;
- (BOOL)isUsingMultilingual;
- (void)keyLayoutDidChangeTo:(id)a0;
- (id)keyLayoutMap;
- (id)keyLayoutMapAsNearbyKeys;
- (void *)languageModelContainer;
- (unsigned int)lexiconIDForInputMode:(id)a0;
- (struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> { struct *x0; struct *x1; struct __compressed_pair<KB::LexiconInfo *, std::allocator<KB::LexiconInfo>> { struct *x0; } x2; })lexiconInformationVector;
- (id)lexiconLocaleOfString:(id)a0 inputMode:(id)a1;
- (id)listOfModelLocalesFromActiveInputModes;
- (void)loadDictionaries;
- (id)modelLoaderForModelLocaleMapping:(id)a0 customResourcePaths:(id)a1 dynamicResourcePath:(id)a2 usesLinguisticContext:(BOOL)a3 isMultiLingualModeEnabled:(BOOL)a4 validEnglishTransformerMultilingualConfig:(BOOL)a5;
- (id)modelLocaleToInputModeMapping;
- (id)resourceInputModes;
- (BOOL)shouldDynamicallySwitchBetweenPrimaryAndSecondaryWrapper;
- (BOOL)shouldFreezeInputMethodChoiceForPopupVariants;
- (BOOL)shouldPassAlternativeInputAsPrediction:(id)a0 isRecognized:(BOOL)a1;
- (BOOL)shouldUpdateDictionary;
- (BOOL)stringIsRecognizedByAlternativeIM:(id)a0;
- (void)updateAutocorrectionListGivenOutdatedInput:(id)a0 andUpdatedInput:(id)a1;
- (BOOL)updateLanguageModelForKeyboardState;
- (void)updateLanguagePriors;
- (BOOL)usesRetrocorrection;
- (BOOL)validEnglishTransformerMultilingualConfig;
- (float)weightForInputMode:(id)a0;

@end
