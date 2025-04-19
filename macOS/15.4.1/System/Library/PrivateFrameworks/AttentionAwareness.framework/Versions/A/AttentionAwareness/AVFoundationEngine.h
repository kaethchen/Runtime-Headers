@class NSString, NSMutableDictionary, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureDevice, NSObject, AVCaptureDeviceInput, AVCaptureVideoDataOutput, NSNotificationCenter;
@protocol OS_dispatch_queue;

@interface AVFoundationEngine : NSObject <AVCaptureMetadataOutputObjectsDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    AVCaptureDevice *_device;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_input;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    NSNotificationCenter *_notificationCenter;
    NSMutableDictionary *_receivers;
    BOOL _shouldRunAttentionDetect;
    BOOL _shouldRunEyeRelief;
    BOOL _shouldRunPersonDetection;
    BOOL _demoMode;
    BOOL _spoofedNotification;
    BOOL _signpostLogged;
    BOOL _sessionRunning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedEngine;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)_getQueue;
- (void)_startSession;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void)_stopSession;
- (void)handleNotification:(id)a0 notification:(id)a1;
- (BOOL)isOperationActive:(id)a0;
- (BOOL)registerForOperation:(id)a0 activateAttentionDetection:(BOOL)a1 activateEyeRelief:(BOOL)a2 activatePersonDetection:(BOOL)a3 identifier:(id)a4;
- (void)setupNotificationsForCenter;
- (id)startOperationForReceiver:(id)a0 reply:(id /* block */)a1;
- (BOOL)unregisterForOperation:(id)a0;

@end
