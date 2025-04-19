@class NSView, IMKUICandidateTouchBarItemController, NSArray, IMKCandidateListDictionary, IMKUICandidateWindowController, NSValue, NSDictionary, IMKCandidate, NSString, IMKUICandidateWindowPositionController, IMKServer, IMKCandidates;
@protocol IMKCandidatesDelegate, IMKCandidatesSimulatorDelegate;

@interface IMKCandidatesPrivate : NSObject {
    IMKCandidate *_focusedCandidate;
    NSArray *_sortingModes;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedTextRect;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSDictionary *annotationAttributes;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) BOOL allowImplicitAnimations;
@property (retain, nonatomic) IMKUICandidateTouchBarItemController *candidateTouchBarController;
@property (retain, nonatomic) IMKUICandidateWindowController *candidateWindowController;
@property (retain, nonatomic) NSArray *candidates;
@property (retain, nonatomic) IMKCandidateListDictionary *candidateListDictionary;
@property (retain, nonatomic) NSValue *candidateWindowPosition;
@property (nonatomic) id<IMKCandidatesDelegate> delegate;
@property (nonatomic) BOOL dismissesAutomatically;
@property (retain, nonatomic) IMKCandidate *focusedCandidate;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSView *informationView;
@property (nonatomic) struct __TISInputSource { } *inputSource;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *noCandidatesMessage;
@property (retain, nonatomic) NSDictionary *noCandidatesMessageAttributes;
@property (nonatomic) unsigned long long numberOfFixedSizeCandidates;
@property (nonatomic) unsigned long long panelType;
@property (nonatomic) IMKCandidates *parent;
@property (retain, nonatomic) IMKUICandidateWindowPositionController *positionController;
@property (nonatomic) BOOL presentsAutomatically;
@property (retain, nonatomic) NSArray *selectionKeys;
@property (nonatomic) struct __TISInputSource { } *selectionKeysKeyLayout;
@property (retain, nonatomic) IMKServer *server;
@property (nonatomic) id<IMKCandidatesSimulatorDelegate> simulatorDelegate;
@property (retain, nonatomic) NSArray *sortingModes;
@property (retain, nonatomic) NSDictionary *supplementalAttributes;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textFrameForWindowPositioning;
@property (retain, nonatomic) NSDictionary *titleAttributes;

- (void)dealloc;
- (id)completeAnnotationAttributesWithFontSize:(double)a0;
- (id)completeTitleAttributesWithFontSize:(double)a0;
- (void)didCommitCandidate:(id)a0 sender:(id)a1;
- (void)didFinishInteracting:(id)a0;
- (void)didSelectCandidate:(id)a0 sender:(id)a1;
- (BOOL)isExpanded;
- (id)visibleCandidates;
- (id)IMKCandidates;
- (id)selectionKeyTitlesFromKeyCodes:(id)a0;
- (id)attributedTitleFromDefinitionUnit:(id)a0;
- (void)candidateSelection:(id)a0 commit:(BOOL)a1;
- (id)completeAttributesWithOriginalSettings:(id)a0 addedSettings:(id)a1;
- (id)completeNoCandidatesMessageAttributesWithFontSize:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForWindowWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)createInternalCandidateController;
- (void)didClickEmojiButton:(id)a0;
- (void)didHideCandidates:(id)a0;
- (void)didSelectSortingMode:(id)a0 sender:(id)a1;
- (void)didUpdateVisibleCandidates:(id)a0;
- (struct __TISInputSource { } *)findUSKeyboardLayout;
- (unsigned long long)firstVisibleLineForSender:(id)a0;
- (BOOL)forceNoIncrementalSearchPositioning;
- (id)initWithServer:(id)a0 panelType:(unsigned long long)a1;
- (id)itemLayoutForFontSize:(double)a0;
- (id)layoutTraitsForFontSize:(double)a0 alignment:(long long)a1 panelType:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })positionForWindowWithSize:(struct CGSize { double x0; double x1; })a0 sender:(id)a1;
- (struct CGSize { double x0; double x1; })preferredWindowSize:(struct CGSize { double x0; double x1; })a0;
- (id)selectedCandidateForSender:(id)a0 proposedCandidate:(id)a1;
- (void)setForceNoIncrementalSearchPositioning:(BOOL)a0;
- (id)supplementalAttributesWithFontSize:(double)a0;
- (void)updateAndShowCandidates;
- (void)updateLayoutTraitsForLanguage;

@end
