@class GCExtendedGamepad, GCMouse, GCMicroGamepad, GCController;

@interface _GCLegacyDeviceSession : GCDeviceSession {
    GCMouse *_currentMouse;
    GCController *_currentController;
    GCMicroGamepad *_currentMicroGamepad;
    GCExtendedGamepad *_currentExtendedGamepad;
}

@property (readonly) GCMouse *currentMouse;
@property (readonly) GCController *currentController;
@property (readonly) GCMicroGamepad *currentMicroGamepad;
@property (readonly) GCExtendedGamepad *currentExtendedGamepad;

+ (id)sharedInstance;
+ (id)defaultConfiguration;
+ (id)weakSharedInstance;

- (void).cxx_destruct;
- (void)becomeCurrentController:(id)a0;
- (void)becomeCurrentMouse:(id)a0;
- (id)initWithConfiguration:(id)a0 environment:(id)a1;
- (void)resignCurrentController:(id)a0;
- (void)resignCurrentMouse:(id)a0;

@end
