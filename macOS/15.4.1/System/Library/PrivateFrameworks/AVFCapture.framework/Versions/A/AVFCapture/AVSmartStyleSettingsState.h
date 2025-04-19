@class NSString, AVCaptureSmartStyle, NSObject;
@protocol OS_dispatch_queue;

@interface AVSmartStyleSettingsState : NSObject {
    NSString *_bundleID;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_systemStyleKey;
    NSString *_systemStyleTimestampKey;
    NSString *_systemStyleEnabledKey;
    AVCaptureSmartStyle *_systemStyle;
    BOOL _systemStyleEnabled;
}

+ (id)_smartStyleSettingsQueue;
+ (id)smartStyleSettingsStateForBundleID:(id)a0;

- (void)dealloc;
- (void)setSystemStyle:(id)a0;
- (void)_proprietaryDefaultChanged:(id)a0 keyPath:(id)a1;
- (id)initForBundleID:(id)a0;
- (void)installProprietaryDefaultListeners;
- (void)setSystemStyleEnabled:(BOOL)a0;
- (id)systemStyle;
- (BOOL)systemStyleEnabled;

@end
