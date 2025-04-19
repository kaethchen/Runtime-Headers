@class NSString;

@interface DSP_HAL_Mock_PropertySet : NSObject <HAL_DSP_PropertySet>

@property (nonatomic) struct DSP_HAL_Mock_Property { void /* function */ **x0; } *propAvailableOffloadsInput;
@property (nonatomic) struct DSP_HAL_Mock_Property { void /* function */ **x0; } *propVoiceActivityState;
@property (nonatomic) struct DSP_HAL_Mock_Property { void /* function */ **x0; } *propDSPGraphParam;
@property (nonatomic) struct function<unsigned int (const AudioObjectPropertyAddress &, unsigned int)> { struct __value_func<unsigned int (const AudioObjectPropertyAddress &, unsigned int)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } propertyUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)configureForFeatureFlag:(int)a0;
- (void)configureForProcessor:(struct function<void (unsigned int, unsigned int)> { struct __value_func<void (unsigned int, unsigned int)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (id)getHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 withQualifierData:(id)a1;
- (id)getHostedDSPPropertyInfoArray;
- (unsigned int)getVoiceActivityState;
- (BOOL)hasHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (BOOL)setHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 withData:(id)a1 withQualifier:(id)a2 error:(id *)a3;
- (void)toggleVoiceActivityAndNotify;

@end
