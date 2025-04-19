@class NSArray, NSDictionary, IMKCandidateListDictionary, IMKCandidate, NSViewController;
@protocol IMKCandidatesDelegate;

@interface IMKRemoteTouchBarCandidates : NSObject

@property (retain, nonatomic) NSArray *visibleCandidatesArray;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) IMKCandidateListDictionary *candidateListDictionary;
@property (nonatomic) BOOL changesSizeWhenScrolling;
@property (nonatomic) id<IMKCandidatesDelegate> delegate;
@property (retain, nonatomic) IMKCandidate *focusedCandidate;
@property (nonatomic) double fontSize;
@property (nonatomic) double gridSizeFactor;
@property (retain, nonatomic) NSDictionary *noCandidatesMessage;
@property (nonatomic) unsigned long long numberOfFixedSizeCandidates;
@property (nonatomic) unsigned long long panelType;
@property (readonly, nonatomic) BOOL presentsAutomatically;
@property (retain, nonatomic) NSDictionary *titleAttributes;
@property (readonly, nonatomic) NSViewController *viewController;
@property (readonly, nonatomic) NSArray *visibleCandidates;

- (void).cxx_destruct;
- (void)hide;
- (void)show:(unsigned long long)a0;
- (id)candidateFromDictionary:(id)a0;
- (void)setCandidateListDictionary:(id)a0 focusedCandidate:(id)a1;
- (void)updateVisibleCandidatesWithArray:(id)a0;

@end
