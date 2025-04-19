@class NSString, NSArray, NSMutableArray, IMKCandidates;

@interface JIMCandidateList : NSObject

@property (retain) NSString *romajiString;
@property (retain) NSString *rawString;
@property (retain) NSString *readingString;
@property (retain) NSMutableArray *candidatesForSortStyles;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) unsigned long long preferredVisibleTopRow;
@property (readonly, nonatomic) unsigned long long selection;
@property (weak, nonatomic) IMKCandidates *candidateController;
@property BOOL simplerList;
@property long long maxCandidateCount;
@property BOOL noTransliteratedCandidates;
@property long long initialVisibleTopRow;

+ (void)setFont:(id)a0;
+ (id)_characterInfoForString:(id)a0;
+ (id)shosaiYomiForString:(id)a0;
+ (id)sortStyles;

- (void).cxx_destruct;
- (void)addCandidates:(id)a0;
- (id)selectionKeyTitles;
- (id)_candidatesForNormalSortStyle;
- (id)_candidatesForRadicalSortStyleOnlyPersonName:(BOOL)a0;
- (id)_candidatesForReadingSortStyle;
- (id)_candidatesForSymbolSortStyle;
- (id)_groupedCandidatesFromFlatArray:(id)a0 forSortStyle:(long long)a1;
- (id)_transliterationLocalizationKeys;
- (void)_updateExsitingCandidateList;
- (unsigned long long)indexOfTransliteratedCandidate:(unsigned long long)a0 inSortStyle:(long long)a1;
- (id)initWithCandidates:(id)a0 forRomaji:(id)a1 rawString:(id)a2 candidateController:(id)a3;
- (long long)initialSelectionForSortStyle:(long long)a0;
- (id)setCandidatesToController:(id)a0 sortStyle:(long long)a1;

@end
