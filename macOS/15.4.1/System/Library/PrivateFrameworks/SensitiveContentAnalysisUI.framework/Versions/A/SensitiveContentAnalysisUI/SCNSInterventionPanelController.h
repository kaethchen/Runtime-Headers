@class NSString, NSDictionary, NSPanel, SCNSInterventionScreenViewController, NSWindow;
@protocol SCUIInterventionViewControllerDelegate;

@interface SCNSInterventionPanelController : NSObject <SCUIInterventionContainer>

@property (weak, nonatomic) NSWindow *displayWindow;
@property (retain, nonatomic) NSPanel *sheetWindow;
@property (retain, nonatomic) SCNSInterventionScreenViewController *screenViewController;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long workflow;
@property (weak, nonatomic) id<SCUIInterventionViewControllerDelegate> interventionDelegate;
@property (readonly, copy, nonatomic) NSDictionary *contextDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerWithAnalysis:(id)a0 workflow:(long long)a1 contextDictionary:(id)a2;
+ (id)controllerWithWorkflow:(long long)a0 contextDictionary:(id)a1;

- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0;
- (void)makeSheetWindow;
- (void)cancelFromScreenOne;
- (void)cancelFromScreenTwo;
- (void)continueFromScreenOne;
- (void)continueFromScreenTwo;
- (id)initWithWorkflow:(long long)a0 contextDictionary:(id)a1;
- (id)initWithWorkflow:(long long)a0 contextDictionary:(id)a1 type:(long long)a2;
- (void)makeSheetForScreen:(long long)a0;
- (void)messageSomeone;
- (void)messageSomeoneDefaultImplementation;
- (void)showSheetForScreenOne;
- (void)showSheetForScreenTwo;

@end
