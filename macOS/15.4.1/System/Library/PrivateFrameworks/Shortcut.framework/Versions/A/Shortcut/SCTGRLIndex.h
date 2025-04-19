@class NSString, NSConditionLock, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface SCTGRLIndex : NSObject <NSCoding, HPDQueryDelegate> {
    NSMutableArray *mGRLs;
    NSMutableArray *mSubIndices;
    long long mUpdateLevel;
    NSConditionLock *mSearchThreadLock;
    NSConditionLock *mCustomSearchThreadLock;
    unsigned long long mQuerySequenceNumber;
    unsigned long long mSearchLimit;
    BOOL mQueryResultsReceived;
    NSMutableArray *mHelpItemResults;
    NSDictionary *mKeyToLocalizedStringTable;
    NSMutableDictionary *mLocalizedStringToKeysTable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)processGRLs:(id)a0 currentGRL:(unsigned long long)a1 withTitle:(id)a2 withCurrentPriority:(float)a3 pruneList:(id)a4;
+ (id)indexFromStorage;
+ (id)indexFromURL:(id)a0;
+ (id)previouslyIndexedWindows;
+ (void)pruneGRLs:(id)a0 toLimit:(unsigned long long)a1 results:(id)a2;
+ (id)sharedIndex;

- (void)dealloc;
- (id)init;
- (BOOL)allowsKeyedCoding;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)beginUpdate;
- (void)endUpdate;
- (id)localizedString:(id)a0;
- (void)helpQuery:(id)a0 didReturnResults:(id)a1;
- (void)helpQueryDidFinishSearching:(id)a0;
- (void)buildLocalizedStringToKeysTable;
- (void)addSubIndex:(id)a0;
- (void)analyzeAndIndexApp;
- (void)appendGRLs:(id)a0;
- (void)cancelPendingSearch;
- (void)dumpGRLs;
- (void)enumerateSubIndices:(id)a0;
- (id)extractStringFromLocalizedStringData:(id)a0;
- (unsigned long long)findGRLsContainingString:(id)a0 limitResultsTo:(unsigned long long)a1;
- (long long)grlCount;
- (id)grls;
- (void)handleHelpQuery:(id)a0;
- (void)indexAppKitMenu:(id)a0 withParentMenu:(id)a1 resultGRLs:(id)a2 isRootMenu:(BOOL)a3 systemHelpMenu:(id)a4 withDepth:(long long)a5;
- (void)indexCarbonMenu:(struct OpaqueMenuRef { } *)a0 withParentMenu:(id)a1 resultGRLs:(id)a2 isRootMenu:(BOOL)a3 systemHelpMenu:(struct OpaqueMenuRef { } *)a4 withDepth:(long long)a5;
- (void)indexExternalApp:(id)a0;
- (void)indexMenuBar:(id)a0;
- (void)indexMenuBarDynamically;
- (BOOL)isInUpdate;
- (id)keysForLocalizedString:(id)a0;
- (BOOL)matchLocalizedString:(id)a0 forKeys:(id)a1;
- (void)readLocalizedSearchData;
- (id)removeAllGRLs;
- (unsigned long long)searchLimit;
- (id)urlToWriteIndexToStorage;
- (void)writeIndexToStorage;

@end
