@class NSArray, JIMCandidate, JIMSession;

@interface JIMCandidateWindowController : IMKCandidates

@property (weak, nonatomic) JIMSession *session;
@property (nonatomic) unsigned long long candidateWindowType;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL temporarilyHidden;
@property (nonatomic) BOOL nonUserInitiatedSortModeSwitch;
@property (retain, nonatomic) NSArray *defaultSelectionKeys;
@property (retain, nonatomic) JIMCandidate *selectedCandidate;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)isConversionCandidateWindow;
- (BOOL)isPredictionCandidateWindow;
- (void)refreshCandidates;
- (void)setActivateState:(BOOL)a0;

@end
