@class IMKUICandidateLayoutTraits, NSString, IMKUICandidateLineLayoutEntry, IMKCandidateList, NSMutableDictionary, NSMutableArray, NSArray;

@interface IMKUICandidateLineLayout : IMKUICandidateIterativeLayout {
    NSMutableDictionary *_candidateToIndexMapping;
}

@property (nonatomic) unsigned long long candidateIterationIndex;
@property (retain, nonatomic) IMKUICandidateLineLayoutEntry *currentEntry;
@property (retain, nonatomic) IMKCandidateList *currentCandidateList;
@property (retain, nonatomic) NSString *currentGroupTitle;
@property (retain, nonatomic) NSMutableArray *entriesInternal;
@property (retain, nonatomic) NSMutableDictionary *indexToCandidateMapping;
@property (retain, nonatomic) NSMutableDictionary *indexToCandidateItemMapping;
@property (retain, nonatomic) NSMutableDictionary *indexToLineIndexMapping;
@property (readonly, nonatomic) NSArray *entries;
@property (retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits;
@property (nonatomic) BOOL sortsElementsInLine;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)candidateAtIndex:(unsigned long long)a0;
- (void)switchToNewLine;
- (id)candidateItemAtIndex:(unsigned long long)a0;
- (id)candidateToIndexMapping;
- (void)didFinishIterating;
- (void)didFinishIteratingOverCandidateList:(id)a0 title:(id)a1;
- (void)didStartIteratingOverCandidateList:(id)a0 title:(id)a1;
- (void)exchangeLineAtIndex:(unsigned long long)a0 withLine:(id)a1;
- (void)finishLayoutOfLine:(id)a0;
- (unsigned long long)indexForCandidate:(id)a0;
- (BOOL)iterateToNextLine;
- (unsigned long long)lineIndexForCandidate:(id)a0;
- (void)processCandidateItem:(id)a0 stop:(BOOL *)a1;
- (BOOL)shouldSwitchToNewLineForCandidateItem:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;

@end
