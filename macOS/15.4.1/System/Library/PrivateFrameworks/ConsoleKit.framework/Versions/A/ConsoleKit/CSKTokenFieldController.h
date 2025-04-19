@class CSKToken, NSString, NSUUID, CSKTokenField, NSMutableArray;
@protocol CSKTokenFieldControllerDelegate;

@interface CSKTokenFieldController : NSObject <NSTokenFieldDelegate>

@property (retain, nonatomic) NSMutableArray *currentTokens;
@property (retain, nonatomic) CSKToken *temporaryToken;
@property (retain, nonatomic) NSString *currentTerm;
@property (retain, nonatomic) NSUUID *currentSearchID;
@property (weak, nonatomic) CSKTokenField *tokenField;
@property (weak, nonatomic) id<CSKTokenFieldControllerDelegate> delegate;
@property (nonatomic) BOOL isBasicSearchEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isTokenEligible:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 editingStringForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 hasMenuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 menuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 readFromPasteboard:(id)a1;
- (id)tokenField:(id)a0 setUpTokenAttachmentCell:(id)a1 forRepresentedObject:(id)a2;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 writeRepresentedObjects:(id)a1 toPasteboard:(id)a2;
- (id)_createTokenFromTerm:(id)a0;
- (id)_createTokensFromObjects:(id)a0;
- (id)_mergeFirstTwoStringsFromArrayIfEligible:(id)a0;
- (void)_notifyDelegateBasicSearchDidUpdate;
- (void)_notifyDelegateTokensDidUpdate;
- (void)addFiltersToCurrentSearchFilters:(id)a0;
- (void)addFiltersToSearch:(id)a0;
- (void)clearCurrentSearchFilters;
- (id)currentSearchFilters;
- (id)currentSearchTerm;
- (void)tokenFieldMenuItemDidClick:(id)a0;
- (void)updateSearchWithFilters:(id)a0;
- (void)updateSearchWithTerm:(id)a0;

@end
