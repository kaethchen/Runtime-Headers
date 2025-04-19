@class IMKCandidateData, IMKUICandidateTouchBarController, IMKUIWindowBasedCandidateController;

@interface IMKUICandidateTouchBarOnScreenBridge : NSObject <IMKCandidateControllerDelegate, IMKUIDelegate>

@property (readonly, nonatomic) IMKUIWindowBasedCandidateController *onscreenController;
@property (readonly, nonatomic) IMKUICandidateTouchBarController *touchBarController;
@property (readonly, nonatomic) BOOL onscreenCandidatesCorrespondToTouchBarCandidates;
@property (retain, nonatomic) IMKUIWindowBasedCandidateController *auxiliaryOnscreenController;
@property (nonatomic) Class auxiliaryOnscreenControllerClass;
@property (nonatomic) BOOL onscreenCandidatesReflectedInTouchBar;
@property (nonatomic) BOOL scrubbingInTouchBarUpdatesOnscreenCandidates;
@property (nonatomic) BOOL shouldRouteTouchBarSelectionEventsToInputController;
@property (retain, nonatomic) IMKCandidateData *secondaryCandidates;

+ (id)sharedBridge;

- (void)dealloc;
- (id)init;
- (long long)windowType;
- (void)touchesEnded;
- (id)candidateDataForController:(id)a0;
- (id)candidatesForSortingMethod:(id)a0;
- (void)closeAuxiliaryWindowController;
- (id)displayMethod;
- (void)handleCandidateSelected:(id)a0 candidateController:(id)a1;
- (void)handleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (void)onscreenCandidateSelectionDidChange:(id)a0 committed:(BOOL)a1;
- (void)onscreenCandidatesDidHide:(id)a0;
- (void)onscreenCandidatesDidReload:(id)a0;
- (void)scrubbedCandidate:(id)a0;
- (id)selectedCandidateKey:(id)a0;
- (void)shouldUpdateForPressAndHold:(id)a0;
- (void)showAuxiliaryWindowIfNecessary;
- (id)sortingMethods;
- (id)textClient;
- (void)touchesEndedOutsideView;

@end
