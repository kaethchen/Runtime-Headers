@class NSString, AXSSMotionTrackingInputManager;

@interface UAShortcutMotionTrackingManager : NSObject <AXSSMotionTrackingInputManagerDelegate>

@property (retain, nonatomic) AXSSMotionTrackingInputManager *_inputManager;
@property BOOL hasUsableInputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

@end
