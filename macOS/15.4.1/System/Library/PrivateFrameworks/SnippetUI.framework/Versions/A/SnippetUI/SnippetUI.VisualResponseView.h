@class NSArray, NSString;
@protocol VRXInteractionDelegate;

@interface SnippetUI.VisualResponseView : NSView <VRXVisualResponse> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ anyRootView;
    void /* unknown type, empty encoding */ hostingViewController;
}

@property (nonatomic) long long currentIdiom;
@property (nonatomic) double snippetWidth;
@property (nonatomic, retain) id<VRXInteractionDelegate> interactionDelegate;
@property (nonatomic) long long backgroundMaterial;
@property (nonatomic, readonly) NSArray *aceCommands;
@property (nonatomic, readonly) BOOL containsComponentsWithAction;
@property (nonatomic, readonly) BOOL requestsKeyWindow;
@property (nonatomic, copy) NSString *viewId;
@property (nonatomic, copy) NSString *responseViewId;
@property (nonatomic) BOOL isRedacted;
@property (nonatomic) BOOL isPresentedWithSmartDialogText;
@property (nonatomic) long long visualResponseLocation;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setAsrText:(id)a0;
- (void)updateSharedState:(id)a0;
- (void)updateSharedStateData:(id)a0;
- (void)setIsInAmbient:(BOOL)a0 withScaleFactor:(double)a1;
- (void)postSiriEvent:(long long)a0;
- (void)setInitialFocusIndex:(long long)a0;
- (void)setPlayerState:(long long)a0 aceId:(id)a1;

@end
