@class NSString, NSMutableArray, SLSXPCService;

@interface SLSBrightnessControlClient : SLSDisplayControlClient <SLSDisplayControlServiceProtocol, SLSBrightnessPolicyTransaction> {
    struct SLSBrightnessPolicyTxState { unsigned char shielding_policy; unsigned char dim_policy; unsigned char sleep_policy; unsigned int mask; } _brightnessPolicyTx;
}

@property (retain, nonatomic) SLSXPCService *service;
@property (copy, nonatomic) id /* block */ notifyBlock;
@property (retain, nonatomic) NSMutableArray *displays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)brightnessControls:(id *)a0;
- (BOOL)commitBrightnessPolicy:(id *)a0;
- (id)controllerWithId:(unsigned int)a0;
- (BOOL)getFloat:(float *)a0 withKey:(const char *)a1 fromReply:(id)a2;
- (BOOL)getWhitePointMatrix:(struct { float x0[9]; } *)a0 withKey:(const char *)a1 fromReply:(id)a2;
- (void)handleServerMessage:(id)a0;
- (id)initBrightnessControlClient:(id *)a0 notifyQueue:(id)a1 notificationBlock:(id /* block */)a2;
- (id)initBrightnessControlClient:(id *)a0 notifyQueue:(id)a1 notificationType:(unsigned long long)a2 notificationBlock:(id /* block */)a3;
- (int)requestAbortRamp:(void *)a0 command:(unsigned long long)a1 display:(int)a2 error:(id *)a3;
- (unsigned long long)requestBrightnessPolicy:(id)a0 error:(id *)a1;
- (unsigned long long)requestBrightnessTimeouts:(id)a0 error:(id *)a1;
- (unsigned long long)requestBulkBrightnessChange:(id)a0 error:(id *)a1;
- (int)requestGetValue:(void *)a0 command:(unsigned long long)a1 display:(int)a2 error:(id *)a3;
- (unsigned long long)requestSetContrastEnhancer:(float)a0 duration:(double)a1 display:(int)a2 error:(id *)a3;
- (unsigned long long)requestSetWhitePoint:(struct { float x0[9]; } *)a0 duration:(double)a1 display:(int)a2 error:(id *)a3;
- (unsigned long long)sendRequest:(id)a0 command:(unsigned long long)a1 error:(id *)a2;
- (id)sendSynchronousRequest:(id)a0 command:(unsigned long long)a1 error:(id *)a2;
- (void)setDimMessagingPolicy:(unsigned char)a0;
- (void)setShieldingPolicy:(unsigned char)a0;
- (void)setSleepMessagingPolicy:(unsigned char)a0;
- (void)terminateConnection:(id *)a0;

@end
