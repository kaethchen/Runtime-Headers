@class GCKeyboard, GCMouse, GCRacingWheel, GCController;
@protocol GCDevice;

@interface GCDeviceSessionEvent : NSObject {
    id<GCDevice> _device;
}

@property (readonly) unsigned long long type;
@property (readonly) GCKeyboard *keyboard;
@property (readonly) GCMouse *mouse;
@property (readonly) GCController *controller;
@property (readonly) GCRacingWheel *racingWheel;

- (id)init;
- (void).cxx_destruct;
- (id)device;
- (id)initWithType:(unsigned long long)a0 device:(id)a1;

@end
