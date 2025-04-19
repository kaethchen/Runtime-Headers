@class NSSet, NSArray, NSMutableDictionary, NSMutableSet, NSString, ABPerson, ABAddressBook;

@interface SGTABPersonGeniusHelper : NSObject {
    NSMutableDictionary *normalizedToResult;
    NSMutableDictionary *nameToResult;
    NSMutableDictionary *addressToResult;
    NSMutableSet *moreThan3Recents;
    NSMutableSet *lessThan3Recents;
    NSString *meDisplayName;
    ABPerson *meCard;
    NSSet *attributeNames;
    NSString *inputString;
    BOOL coreRecentsAvailable;
    BOOL inputStringIsAMail;
    BOOL meCardAccountsFetched;
    void *evaluator;
}

@property BOOL includeScreenames;
@property (readonly) ABAddressBook *addressBook;
@property (copy) NSArray *attributeNames;

+ (id)_equivalentEmailsForEmail:(id)a0;
+ (BOOL)_loadAccountsFramework;
+ (BOOL)_loadCoreRecentsFramework;
+ (id)_userMailAccounts;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)me;
- (id)nameProperties;
- (void)setInputString:(id)a0;
- (id)inputString;
- (id)personWithName:(id)a0;
- (id)_personWithValue:(id)a0 forProperty:(id)a1 key:(id)a2;
- (id)additionalSuggestions;
- (BOOL)attributeNamesContainsSubject;
- (id)attributesForEmail;
- (id)attributesForFullname;
- (id)conjoinedElementForProperties:(id)a0 value:(id)a1 withComparison:(long long)a2;
- (long long)junctionForComparison:(long long)a0 value:(id)a1;
- (id)normalizedValue:(id)a0 forAttributeWithName:(id)a1 otherAttributes:(id)a2 attributeValues:(id *)a3 representedObject:(id *)a4;
- (id)normalizedValueForAddress:(id)a0 attributeValues:(id *)a1 representedObject:(id *)a2;
- (id)normalizedValueForFullname:(id)a0 address:(id)a1 attributeValues:(id *)a2 representedObject:(id *)a3;
- (id)normalizedValueForValue:(id)a0;
- (id)personWithEmail:(id)a0;
- (int)recentTypeForSuggestion:(id)a0;
- (id)resultMatchingAddress:(id)a0;
- (id)resultMatchingName:(id)a0 address:(id)a1 shouldUseAddressForSearch:(BOOL *)a2;
- (id)wordsFromString:(id)a0;

@end
