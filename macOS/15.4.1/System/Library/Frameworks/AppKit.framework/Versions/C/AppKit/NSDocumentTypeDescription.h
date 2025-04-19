@class NSArray, NSString;

@interface NSDocumentTypeDescription : NSObject {
    NSArray *_exportableTypeIdentifiersOrOldStyleNames;
    NSArray *_fileNameExtensionsAndHFSFileTypes;
    NSString *_className;
    int _role;
    NSString *_oldStyleName;
    NSString *_oldStyleAlias;
    id _identifierOrIdentifiers;
    NSString *_persistentStoreType;
    NSString *_userActivityType;
}

+ (void)_addUniqueNameOrNames:(id)a0 toNames:(id)a1;
+ (id)_noneOrQuotingOfText:(id)a0;
+ (BOOL)_validateDeclarationString:(id)a0 forKey:(id)a1;
+ (BOOL)_validateDeclarationStrings:(id)a0 forKey:(id)a1;
+ (id)aliasesByName;
+ (id)descriptionsWithDeclarations:(id)a0;
+ (id)namesByAlias;
+ (BOOL)parsesLSItemContentTypes;

- (id)description;
- (void).cxx_destruct;
- (id)className;
- (id)_initWithDeclaration:(id)a0 cachedNamesByAlias:(id)a1;
- (id)appSpecificPresentableNameForName:(id)a0;
- (BOOL)exactlyMatchesFileNameExtensionOrHFSFileType:(id)a0;
- (id)fileNameExtensionsAndHFSFileTypes;
- (id)firstName;
- (void)getReadableNotWritable:(BOOL)a0 names:(id)a1;
- (BOOL)isEditableByThisApp;
- (BOOL)isIdentifiedByName:(id)a0;
- (BOOL)isIdentifiedByUTIs;
- (BOOL)isNativeName:(id)a0;
- (BOOL)isViewableByThisApp;
- (BOOL)matchesAnyFile;
- (id)persistentStoreType;
- (id)userActivityType;

@end
