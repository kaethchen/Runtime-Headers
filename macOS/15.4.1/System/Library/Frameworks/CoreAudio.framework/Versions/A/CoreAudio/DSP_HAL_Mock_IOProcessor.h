@class NSString, DSP_HAL_Mock_PropertySet;
@protocol HAL_DSP_HostCallbacks;

@interface DSP_HAL_Mock_IOProcessor : NSObject <HAL_DSP_IOProcessor>

@property (nonatomic) void *dspCallbacks;
@property (retain, nonatomic) id<HAL_DSP_HostCallbacks> hostCallbacks;
@property (nonatomic) int featureFlag;
@property (retain, nonatomic) DSP_HAL_Mock_PropertySet *processorProperties;
@property (nonatomic) struct function<DSP_HAL_Mock_TestHooks ()> { struct __value_func<DSP_HAL_Mock_TestHooks ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } testHookFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)adaptToConfigurationChange:(id)a0 withCallbacks:(void *)a1 error:(id *)a2;
- (id)basic_negotiateConfigurationChange:(void *)a0 error:(id *)a1;
- (BOOL)callAdaptHook:(const void *)a0;
- (BOOL)callNegotiateHook:(const void *)a0;
- (id)conference_negotiateConfigurationChange:(void *)a0 error:(id *)a1;
- (id)getProcessorPropertySet;
- (id)negotiateConfigurationChange:(id)a0 error:(id *)a1;
- (id)simulateConfigurationChange:(id)a0 error:(id *)a1;
- (id)spatial_negotiateConfigurationChange:(void *)a0 error:(id *)a1;

@end
