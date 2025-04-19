@class NSString, UINSGameEventTranslator;

@interface UINSGameModule : NSObject

@property (class, readonly) NSString *name;

@property (weak) UINSGameEventTranslator *gameEventTranslator;
@property BOOL enabled;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)configuration;
- (void)reset;
- (id)initWithConfiguration:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)flagsChanged:(id)a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (void)quickLookWithEvent:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)rotateWithEvent:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)translateWithEvent:(id)a0;
- (BOOL)wantsRestingTouches;
- (void)applyUserDefaults;
- (void)logAnalyticsPayload:(id)a0;

@end
