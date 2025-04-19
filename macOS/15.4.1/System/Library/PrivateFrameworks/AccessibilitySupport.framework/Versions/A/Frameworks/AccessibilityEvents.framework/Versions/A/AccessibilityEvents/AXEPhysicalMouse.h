@class NSDictionary, NSData, NSObject, HIDUserDevice;
@protocol OS_dispatch_queue;

@interface AXEPhysicalMouse : NSObject

@property (class, readonly, copy, nonatomic) NSDictionary *_mouseHIDDeviceProperties;
@property (class, readonly, copy, nonatomic) NSData *_mouseHIDReportDescriptorData;

@property (nonatomic) BOOL _activated;
@property (retain, nonatomic) HIDUserDevice *_hidUserDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_hidUserDeviceQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_reportingQueue;

+ (id)_reportWithLeftButtonDown:(BOOL)a0 rightButtonDown:(BOOL)a1 xMovement:(double)a2 yMovement:(double)a3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)_activateOnReportingQueue;
- (void)_deactivateOnReportingQueue;
- (void)_moveOnReportingQueue:(double)a0 :(double)a1;
- (void)move:(double)a0 :(double)a1;

@end
