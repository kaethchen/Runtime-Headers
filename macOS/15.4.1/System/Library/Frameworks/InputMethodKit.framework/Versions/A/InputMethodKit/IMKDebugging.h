@interface IMKDebugging : NSObject

+ (id)candidateInformationFromArray:(id)a0;
+ (BOOL)candidateWindowIsVisible;
+ (id)groupedCandidateArray;
+ (id)groupedCandidateArrayWithPasteboardNamed:(id)a0;
+ (id)informationStringWithIndex:(unsigned long long)a0;
+ (id)informationStringWithIndex:(unsigned long long)a0 pasteboardNamed:(id)a1;
+ (BOOL)isSendingDebugInformation;
+ (id)selectedCandidateSurface;
+ (void)setCandidateListDictionary:(id)a0 candidateWindowVisible:(BOOL)a1 selectedCandidateSurface:(id)a2 topVisibleLine:(unsigned long long)a3 visibleSelectionKeys:(id)a4;
+ (void)setCandidateListDictionary:(id)a0 candidateWindowVisible:(BOOL)a1 selectedCandidateSurface:(id)a2 topVisibleLine:(unsigned long long)a3 visibleSelectionKeys:(id)a4 debuggingPasteboardName:(id)a5;
+ (void)setCandidates:(id)a0 candidateWindowVisible:(BOOL)a1 selectedCandidateSurface:(id)a2;
+ (unsigned long long)topVisibleLine;
+ (id)touchBarCandidateArray;
+ (id)touchBarSelectedCandidateSurface;
+ (id)visibleSelectionKeys;

@end
