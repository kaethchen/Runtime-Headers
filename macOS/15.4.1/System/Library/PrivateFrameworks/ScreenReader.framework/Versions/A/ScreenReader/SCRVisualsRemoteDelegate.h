@class SCRVisualsMenuWindow, SCRVisualsSearchWindow, NSString;

@interface SCRVisualsRemoteDelegate : NSObject <AXVisualsAgentDelegateInterface>

@property (retain, nonatomic) SCRVisualsMenuWindow *menuWindow;
@property (retain, nonatomic) SCRVisualsSearchWindow *searchWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)voiceOverBuiltInFeatureIdentifiers;

- (void).cxx_destruct;
- (void)closeButtonPressed;
- (void)mouseDownOnMenuItem:(id)a0 atRowIndex:(long long)a1;
- (void)shouldStopScrollingInDirection:(unsigned long long)a0;
- (void)downArrowKeyDown;
- (void)fasterButtonPressed;
- (void)nextButtonPressed;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (void)previousButtonPressed;
- (void)respondsToSelector:(SEL)a0 reply:(id /* block */)a1;
- (void)returnKeyDown;
- (void)selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 willChangeTo:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)shouldScrollInDirection:(unsigned long long)a0 withPayload:(id)a1;
- (void)slowerButtonPressed;
- (void)stopButtonPressed;
- (void)text:(id)a0 willChangeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 to:(id)a2;
- (void)upArrowKeyDown;
- (void)visualsAgentHUDDidShowOverlayForFeatures:(id)a0 enabled:(id)a1;
- (void)visualsAgentHUDDidShowStatusString:(id)a0 forFeature:(id)a1;

@end
