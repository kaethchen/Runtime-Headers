@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface CBDisplayModuleMacOS : CBDisplayModule {
    BOOL _running;
    struct DSDevice { unsigned int x0; unsigned long long x1; struct __CFString *x2; unsigned int x3; unsigned int x4; struct __CFDictionary *x5; int x6; BOOL x7; BOOL x8; float x9; void *x10; void *x11; double x12; id x13; id /* block */ x14; struct IONotificationPort *x15; unsigned int x16; id x17; id x18; BOOL x19; } *_device;
    NSString *_containerID;
    NSObject<OS_dispatch_source> *_delayedBrightnessCommitTimer;
    NSMutableDictionary *_properties;
    BOOL _brightnessUpdatesDisabled;
    float _magSafeFactor;
    unsigned long long _vendorID;
    unsigned long long _productID;
}

@property (readonly) unsigned long long displayID;
@property (readonly) BOOL builtIn;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)stop;
- (id)copyIdentifiers;
- (void)commitUserBrightness:(id)a0;
- (id)copyALCState;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (id)copyPropertyInternalForKey:(id)a0 withParameter:(id)a1;
- (BOOL)displayGetBrightness:(float *)a0;
- (BOOL)displayGetLinearBrightness:(float *)a0 forDynamicSlider:(BOOL)a1;
- (BOOL)displaySetBrightness:(float)a0 withType:(int)a1;
- (BOOL)displaySetBrightnessSmooth:(float)a0;
- (BOOL)getFloatValue:(float *)a0 forKey:(id)a1;
- (BOOL)getIntegerValue:(long long *)a0 forKey:(id)a1;
- (void)handlDeviceUpdate:(id)a0 withData:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)initWithDisplayID:(unsigned long long)a0 andQueue:(id)a1;
- (void)newKey:(id *)a0 andDisplayID:(unsigned int *)a1 fromNotificationName:(id)a2;
- (void)sendDisplayBrightnessStateNotificationWithReason:(id)a0;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)setFloatValue:(float)a0 forKey:(id)a1;
- (BOOL)setIntegerValue:(long long)a0 forKey:(id)a1;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;

@end
