@class VFXWorld;

@interface VFXTriggerManager : NSObject <NSSecureCoding> {
    VFXWorld *_world;
    struct { unsigned char mouseDown : 1; unsigned char mouseUp : 1; unsigned char mouseMoved : 1; unsigned char mouseDragged : 1; unsigned char keyDown : 1; unsigned char keyUp : 1; unsigned char touchBegan : 1; unsigned char touchMoved : 1; unsigned char touchEnded : 1; unsigned char touchCanceled : 1; } _enabledTypes;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)world;
- (void)setWorld:(id)a0;
- (void)enableTriggerTypes:(id)a0;
- (void)triggerEvent:(id)a0 fromView:(id)a1;
- (void)triggerType:(id)a0 event:(id)a1 fromView:(id)a2;

@end
