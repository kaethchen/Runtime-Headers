@class NSArray, NSDictionary, CMIOExtensionSessionDevice, NSString, NSMutableDictionary;

@interface CMIODALExtensionDevice : NSObject <CMIOExtensionSessionDeviceDelegate> {
    void *_plugIn;
    void *_device;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _streamsLock;
    NSArray *_sessionStreams;
    NSMutableDictionary *_streamsMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertiesLock;
    NSDictionary *_properties;
    NSString *_description;
}

@property (retain) NSArray *sessionStreams;
@property (retain) NSDictionary *properties;
@property (readonly, retain) CMIOExtensionSessionDevice *sessionDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)device:(id)a0 availableStreamsChanged:(id)a1;
- (void)device:(id)a0 runningSomewhereChanged:(BOOL)a1;
- (void)device:(id)a0 deviceControlPIDChanged:(int)a1;
- (void)device:(id)a0 propertiesChanged:(id)a1;
- (void)deviceHasBeenInvalidated:(id)a0;
- (id)initWithPlugIn:(void *)a0 device:(void *)a1 sessionDevice:(id)a2;
- (void)updateStateWithStreamsArrived:(id)a0 streamsRemoved:(id)a1;

@end
