@class NSUUID, NSDictionary, NSString;

@interface CBVirtualBrightnessControl : NSObject <SLSBrightnessControl> {
    struct { float matrix[9]; } _currentWPMatrix;
    double _currentNits;
}

@property (readonly, nonatomic) int displayId;
@property (readonly, nonatomic) unsigned long long productId;
@property (readonly, nonatomic) unsigned long long vendorId;
@property (readonly, nonatomic) unsigned long long serialNumber;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *containerId;
@property (readonly, nonatomic) BOOL brightnessAvailable;
@property (readonly, nonatomic) BOOL whitePointAvailable;
@property (readonly, nonatomic) BOOL whitePointD50XYZ;
@property (readonly, getter=isOnline) BOOL online;
@property (readonly, nonatomic) float maximumLuminance;
@property (readonly, nonatomic) struct { float x; float y; } nativeWhitePoint;
@property (readonly, nonatomic) unsigned int displayType;
@property (readonly, copy, nonatomic) NSDictionary *brightnessCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)getLinearBrightness:(float *)a0 error:(id *)a1;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)abortWhitePointRamp:(struct { float x0[9]; } *)a0 error:(id *)a1;
- (BOOL)commitBrightness:(id *)a0;
- (id)displayInfo;
- (BOOL)getNits:(float *)a0 error:(id *)a1;
- (void)registerForNotifications:(id)a0 withBlock:(id /* block */)a1;
- (void)setAmbient:(float)a0;
- (void)setHeadroom:(float)a0;
- (BOOL)setLinearBrightness:(float)a0 error:(id *)a1;
- (void)setNotificationQueue:(id)a0;
- (void)setPotentialHeadroom:(float)a0;
- (void)setReferenceHeadroom:(float)a0;
- (void)setSDRBrightness:(float)a0;
- (BOOL)setWhitePoint:(struct { float x0[9]; } *)a0 rampDuration:(double)a1 error:(id *)a2;
- (void)unregisterNotificationBlocks;
- (BOOL)abortNitsRamp:(float *)a0 error:(id *)a1;
- (BOOL)getWhitePoint:(struct { float x0[9]; } *)a0 error:(id *)a1;
- (BOOL)setNits:(float)a0 rampDuration:(double)a1 error:(id *)a2;

@end
