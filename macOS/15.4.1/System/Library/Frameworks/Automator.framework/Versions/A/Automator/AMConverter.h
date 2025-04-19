@class NSMutableDictionary;

@interface AMConverter : NSObject

@property (retain) NSMutableDictionary *UTITypes;
@property (retain) NSMutableDictionary *conversionPathCache;
@property (retain) NSMutableDictionary *_conversionTypes;

+ (id)sharedConverter;
+ (id)_cachedChildIdentifiersForType:(id)a0;
+ (id)_cachedParentIdentifiersForType:(id)a0;
+ (id)_sortChildTypeIdentifiers:(id)a0 forType:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)convertValue:(id)a0 toType:(id)a1;
- (id)conversionFromGenericUTI:(id)a0 toUTI:(id)a1;
- (id)conversionTypes;
- (id)UTIPathFromType:(id)a0 toType:(id)a1;
- (id)UTITypesWhichLinkToType:(id)a0;
- (id)actionsInArray:(id)a0 whichAcceptOrConformToTypes:(id)a1;
- (id)actionsInArray:(id)a0 whichCanConvertFrom:(id)a1;
- (id)bestGuessOfTypeOfData:(id)a0;
- (void)categorizeConversionActions;
- (id)conversionActionPathToOutputType:(id)a0 withStartingActions:(id)a1 startingIndex:(unsigned long long)a2;
- (id)conversionActionPathsFromInputType:(id)a0 toOutputType:(id)a1;
- (id)conversionFromUTI:(id)a0 toUTI:(id)a1;
- (id)conversionFromUTI:(id)a0 toUTI:(id)a1 ignoreGenericTypes:(BOOL)a2;
- (id)conversionPathFromUTIPath:(id)a0 error:(id *)a1;
- (id)conversionPathsFromInputType:(id)a0 toOutputTypes:(id)a1;
- (id)conversionPathsFromInputTypes:(id)a0 toOutputType:(id)a1;
- (id)conversionPathsFromInputTypes:(id)a0 toOutputTypes:(id)a1;
- (id)convertValue:(id)a0 fromType:(id)a1 toType:(id)a2;
- (id)convertValue:(id)a0 toContainerType:(id)a1;
- (id)convertValueToList:(id)a0;
- (id)convertValueToSingle:(id)a0;
- (BOOL)doAnyOfTheseTypes:(id)a0 conformToAnyOfTheseTypes:(id)a1;
- (BOOL)doAnyOfTheseTypes:(id)a0 conformToType:(id)a1;
- (BOOL)doesUTIType:(id)a0 conformToAnyOfTheseTypes:(id)a1;
- (BOOL)doesUTIType:(id)a0 conformToUTIType:(id)a1;
- (id)executeConnector:(id)a0 withInput:(id)a1 runner:(id)a2 error:(id *)a3;
- (id)executeConversionPath:(id)a0 connector:(id)a1 withInput:(id)a2 runner:(id)a3 error:(id *)a4;
- (BOOL)isGenericType:(id)a0;
- (id)stepDownConversionActionFromType:(id)a0 toType:(id)a1;

@end
