@class NSArray, NSMutableDictionary, IMKUICandidateLayoutTraits;

@interface IMKUIFastTrackVerticalLayout : IMKUIAbstractCandidateLayout

@property (retain, nonatomic) NSArray *flatCandidateArray;
@property (retain, nonatomic) NSMutableDictionary *candidateToIndexMap;
@property (retain, nonatomic) NSMutableDictionary *indexToCandidateMapping;
@property (retain, nonatomic) NSMutableDictionary *indexToGroupMap;
@property (nonatomic) BOOL adjustSizeForAnnotationMargins;
@property (readonly, nonatomic) NSArray *allCandidates;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL hasAnnotations;
@property (retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits;
@property (nonatomic) double length;
@property (nonatomic) BOOL showsGroups;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)candidateAtIndex:(long long)a0;
- (id)candidateAtIndexPath:(id)a0;
- (id)groupTitleForIndex:(long long)a0;
- (unsigned long long)indexForCandidate:(id)a0;
- (void)setCandidateGroups:(id)a0;
- (struct CGSize { double x0; double x1; })sizeOfElementsFromIndex:(long long)a0 toIndex:(long long)a1;

@end
