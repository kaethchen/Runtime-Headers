@interface SearchUIWebCompletion : SearchUICompletion

+ (BOOL)cardSectionIsWeb:(id)a0;
+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;

- (id)image;
- (BOOL)completionResultIsPotentiallyPunchout;
- (id)nonPrefixMatchExtensionString;
- (id)prefixMatchExtensionString;

@end
