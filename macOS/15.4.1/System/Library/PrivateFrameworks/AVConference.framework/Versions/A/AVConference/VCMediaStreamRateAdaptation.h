@class AVCRateController, NSString;
@protocol VCMediaStreamRateAdaptationDelegate;

@interface VCMediaStreamRateAdaptation : NSObject <AVCRateControllerDelegate> {
    struct OpaqueFigCFWeakReference { } *_delegateWeak;
    id<VCMediaStreamRateAdaptationDelegate> _delegate;
    int _mode;
}

@property (readonly, nonatomic) AVCRateController *vcrcRateController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)resolvePolicyForCurrentConnection:(id)a0;

- (void)dealloc;
- (BOOL)start;
- (BOOL)stop;
- (void)configureRateControllerWithConfig:(const struct tagVCMediaStreamRateAdaptationConfig { long long x0; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x0; unsigned int x1; unsigned int x2; int x3; BOOL x4; } x1; } x1; } *)a0;
- (id)initWithDelegate:(id)a0 params:(const struct tagVCMediaStreamRateAdaptationParams { id x0; unsigned int x1; struct opaqueRTCReporting *x2; int x3; struct tagVCMediaStreamRateAdaptationConfig { long long x0; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x0; unsigned int x1; unsigned int x2; int x3; BOOL x4; } x1; } x1; } x4; struct tagHANDLE *x5; int x6; BOOL x7; id x8; id x9; } *)a1;
- (void)rateController:(id)a0 targetBitrateDidChange:(unsigned int)a1 rateChangeCounter:(unsigned int)a2;
- (BOOL)updateRateControlWithNetworkNotification:(struct tagVCNWConnectionNotification { unsigned char x0; unsigned char x1; unsigned char x2; union { int x0; int x1; } x3; union { struct ifnet_interface_advisory { union { struct { unsigned char x0; unsigned char x1; unsigned short x2; int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned char x11; unsigned char x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; } x0; struct { struct ifnet_interface_advisory_header { unsigned char x0; unsigned char x1; unsigned char x2; union { unsigned char x0; unsigned char x1; } x3; } x0; struct ifnet_interface_advisory_capacity { int x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; } x1; union { struct ifnet_interface_advisory_wifi_context { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned short x9; unsigned int x10[6]; } x0; struct ifnet_interface_advisory_cell_context { unsigned char x0; short x1; short x2; char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned short x8; unsigned short x9; unsigned char x10; unsigned char x11; } x1; } x2; } x1; } x0; } x0; struct tagVCNWConnectionNotification_BBUplinkCRA { int x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; } x1; struct tagVCNWConnectionNotification_BBLinkMeasurement { int x0; short x1; short x2; char x3; unsigned char x4; unsigned char x5; } x2; struct tagVCNWConnectionNotification_BBBWLimitation { unsigned char x0; } x3; struct tagVCNWConnectionNotification_BBCDRXUpdate { unsigned char x0; unsigned short x1; } x4; struct tagVCNWConnectionNotification_BBOutage { int x0; unsigned short x1; unsigned char x2; } x5; struct tagVCNWConnectionNotification_BBThermalUpdate { int x0; } x6; } x4; } *)a0;

@end
