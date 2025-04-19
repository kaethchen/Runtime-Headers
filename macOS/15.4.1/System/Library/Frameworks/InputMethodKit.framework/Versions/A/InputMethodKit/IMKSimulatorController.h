@class IMKInputController, IMKSimulatorWindow, NSString;
@protocol IMKSimulatorDelegate, IMKTextInput, NSObject;

@interface IMKSimulatorController : NSObject

@property (retain, nonatomic) IMKSimulatorWindow *currentWindow;
@property (nonatomic) BOOL isPressAndHold;
@property (readonly, nonatomic) IMKInputController *currentInputController;
@property (readonly, nonatomic) id<IMKTextInput, NSObject> currentClient;
@property (copy, nonatomic) NSString *inputMode;
@property (readonly, nonatomic) id<IMKSimulatorDelegate, NSObject> simulatorDelegate;
@property (nonatomic) long long direction;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL spotlightOn;
@property (nonatomic) BOOL inPressAndHoldEvent;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (Class)clientClass;
- (void)inputModeChanged;
- (void)didHandleEvent:(id)a0;
- (Class)inputControllerClass;
- (void)showNewWindow;
- (void)windowFocusSwitched:(id)a0;

@end
