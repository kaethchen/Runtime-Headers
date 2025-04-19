@class NSString, NSArray, NSPersonNameComponentsFormatter, NSMutableDictionary, ABAddressBook;

@interface SGTMailQueryGenius : SGTQueryGenius {
    ABAddressBook *ab;
    NSPersonNameComponentsFormatter *personFormatter;
    NSMutableDictionary *imageCache;
    NSMutableDictionary *uniqueIDToLoader;
    NSArray *mailboxList;
    NSArray *mailFlagColors;
    NSArray *mailPriorities;
    NSArray *mailAccountPaths;
}

@property (getter=isContentSearchEnabled) BOOL contentSearchEnabled;
@property (copy) NSString *contentSearchDisabledExplanation;
@property (copy) NSArray *mailAccountPaths;
@property (copy) NSArray *mailAccountURLs;
@property (copy) NSArray *mailboxList;
@property (copy) NSArray *mailFlagColors;
@property (copy) NSArray *mailPriorities;

+ (id)messageCategory;
+ (id)subjectCategory;
+ (id)_attributeToScope;
+ (BOOL)attributesRepresentsAPerson:(id)a0;
+ (id)didYouMeanCategory;
+ (id)peopleAttributes;
+ (id)peopleCategory;
+ (id)peopleCategoryForRecipients;
+ (id)subjectCategoryWhenContentIsDisabled;
+ (id)tokenTitleForScope:(long long)a0 suggestion:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (void)_clearImageCache;
- (id)allAttributeNamesForSuggestion:(id)a0;
- (long long)_fallbackScope;
- (id)_initialForName:(id)a0;
- (id)_personForSuggestion:(id)a0;
- (void)_registerSuggester:(id)a0;
- (void)_scheduleCacheClear;
- (id)_shorterDisplayNameForSuggestion:(id)a0;
- (id)_shorterNameWithFirstName:(id)a0 middleName:(id)a1 lastName:(id)a2 nickName:(id)a3 fullName:(id)a4;
- (BOOL)attributeName:(id)a0 isValidForScope:(long long)a1;
- (id)displayNameForScope:(long long)a0;
- (id)filterQueryStringForSuggestions:(id)a0;
- (id)imageForSuggestion:(id)a0;
- (id)mailFlagColorRepresentedObjectForSuggestion:(id)a0;
- (id)mailPriorityRepresentedObjectForSuggestion:(id)a0;
- (id)mailboxRepresentedObjectsForSuggestion:(id)a0;
- (BOOL)offerDidYouMeanSuggestion;
- (id)overridenAttributes;
- (void)postProcessSuggestions:(id)a0 inCategory:(id)a1;
- (id)propertyListForRepresentedObject:(id)a0;
- (id)rawQueryStringFromInputString:(id)a0;
- (id)representedObjectFromPropertyList:(id)a0;
- (long long)scopeForAttributeName:(id)a0;
- (id)scopeMenuForSuggestion:(id)a0;
- (id)scopesForAttributeNames:(id)a0;
- (id)suggester:(id)a0 additionalSuggestionsForInput:(id)a1;
- (id)suggester:(id)a0 filterSuggestion:(id)a1 fromItem:(id)a2 forInput:(id)a3;
- (id)suggester:(id)a0 filterSuggestions:(id)a1 forInput:(id)a2;
- (void)suggester:(id)a0 willStartProcessingResultsForInput:(id)a1;
- (void)suggester:(id)a0 willStartSearchingSuggestionsForInput:(id)a1;
- (void)suggesterBecomesIdle:(id)a0;
- (id)suggestionForPerson:(id)a0;
- (id)suggestionForSubject:(id)a0;
- (id)suggestionForUnknownPersonWithName:(id)a0 address:(id)a1;
- (id)suggestionFromPropertyList:(id)a0;

@end
