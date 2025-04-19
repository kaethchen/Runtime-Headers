@class AVOutputContext, NSString, AVOutputDevice;

@interface AVOutputContextController : NSObject {
    AVOutputDevice *_cachedOutputDevice;
    NSString *_cachedOutputDeviceName;
}

@property (readonly) AVOutputContext *outputContext;
@property (readonly, getter=isExternalOutputDevicePicked) BOOL externalOutputDevicePicked;
@property (readonly) NSString *outputDeviceName;
@property (readonly) AVOutputDevice *outputDevice;

+ (id)keyPathsForValuesAffectingExternalOutputDevicePicked;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOutputContext:(id)a0;
- (void)_outputDeviceChangedNotification:(id)a0;
- (void)_updateCachedValues;
- (BOOL)setOutputDevice:(id)a0 forFeature:(unsigned long long)a1;

@end
