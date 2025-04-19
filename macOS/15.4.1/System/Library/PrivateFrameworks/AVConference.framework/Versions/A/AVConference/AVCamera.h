@interface AVCamera : NSObject {
    unsigned int _deviceID;
}

+ (id)UIDforDeviceID:(unsigned int)a0;
+ (unsigned int)deviceIDForUID:(id)a0;
+ (id)cameraList;

- (id)description;
- (id)displayName;
- (BOOL)isSuspended;
- (unsigned int)deviceID;
- (id)GUID;
- (unsigned int)cameraType;
- (BOOL)cameraSupportsWidth:(int)a0 height:(int)a1;
- (id)initWithCMIODeviceID:(unsigned int)a0;
- (BOOL)is1080HD;
- (BOOL)isIrisOpen;
- (BOOL)isMinimumFrameRateSupportedForStreamID:(unsigned int)a0 withFormatDescriptor:(struct opaqueCMFormatDescription { } *)a1;
- (BOOL)isWVGA;
- (BOOL)isWidescreen;

@end
