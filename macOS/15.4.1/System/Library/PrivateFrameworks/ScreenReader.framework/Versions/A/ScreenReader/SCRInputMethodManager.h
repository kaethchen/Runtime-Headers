@class SCRElement, SCRApplication;

@interface SCRInputMethodManager : NSObject

@property (class, readonly) SCRInputMethodManager *shared;

@property (retain, nonatomic) SCRElement *_currentInputMethodWindow;
@property (retain, nonatomic) SCRApplication *currentApplication;

- (void).cxx_destruct;
- (void)_inputMethodSelectionChanged:(id)a0;
- (BOOL)isShowingCandidateWindow;
- (void)_delayedSendingRequest:(id)a0;
- (void)_handleListSelectionChangeForUIElement:(id)a0;
- (BOOL)canActAsObserverTarget;
- (void)handleCandidateWindowHidden;
- (void)handleCandidateWindowShown:(id)a0 forApplication:(id)a1;

@end
