@class NSString;

@interface SGTNameExtractor : NSObject {
    NSString *_storageString;
}

+ (id)partialSurnames;
+ (id)extractorWithString:(id)a0;
+ (id)formattedAddressWithName:(id)a0 email:(id)a1 useQuotes:(BOOL)a2;
+ (id)nameExtensions;
+ (id)nameExtensionsThatDoNotNeedCommas;

- (void).cxx_destruct;
- (id)addressComment;
- (id)addressDomain;
- (BOOL)appearsToBeAnInitial;
- (id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)a0;
- (id)componentsSeparatedByCommaRespectingQuotesAndParens;
- (void)firstName:(id *)a0 middleName:(id *)a1 lastName:(id *)a2 extension:(id *)a3;
- (BOOL)firstNameShouldBeFirst;
- (id)searchStringComponents;
- (id)uncommentedAddress;
- (id)uncommentedAddressRespectingGroups;

@end
