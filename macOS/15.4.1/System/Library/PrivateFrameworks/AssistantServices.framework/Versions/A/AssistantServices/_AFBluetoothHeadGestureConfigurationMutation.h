@class NSString, AFBluetoothHeadGestureConfiguration;

@interface _AFBluetoothHeadGestureConfigurationMutation : NSObject <AFBluetoothHeadGestureConfigurationMutating> {
    AFBluetoothHeadGestureConfiguration *_base;
    BOOL _isEnabled;
    BOOL _isSupported;
    long long _acceptGesture;
    long long _rejectGesture;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsEnabled : 1; unsigned char hasIsSupported : 1; unsigned char hasAcceptGesture : 1; unsigned char hasRejectGesture : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (void)setIsEnabled:(BOOL)a0;
- (void)setIsSupported:(BOOL)a0;
- (long long)getAcceptGesture;
- (BOOL)getIsEnabled;
- (BOOL)getIsSupported;
- (long long)getRejectGesture;
- (id)initWithBase:(id)a0;
- (void)setAcceptGesture:(long long)a0;
- (void)setRejectGesture:(long long)a0;

@end
