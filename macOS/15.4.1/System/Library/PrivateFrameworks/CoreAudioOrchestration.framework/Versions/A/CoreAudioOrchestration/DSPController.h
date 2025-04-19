@class CoreAudioOrchestration_ADM_Loader;
@protocol HAL_DSP_IOProcessor, ADMConfigurationProtocol, HAL_DSP_Factory;

@interface DSPController : NSObject {
    id<HAL_DSP_Factory> admFactory;
    CoreAudioOrchestration_ADM_Loader *admLoader;
    id<HAL_DSP_IOProcessor> dspIOProcessor;
    struct HAL_DSP_IOCallbacks { struct function<void (unsigned int)> { struct __value_func<void (unsigned int)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } m_registerClientCallback; struct function<void (unsigned int, const AMCP::Proc_Cycle_Info &, unsigned long, AMCP::Proc_Stream *, unsigned long, AMCP::Proc_Stream *)> { struct __value_func<void (unsigned int, const AMCP::Proc_Cycle_Info &, unsigned long, AMCP::Proc_Stream *, unsigned long, AMCP::Proc_Stream *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } m_ioCallback; struct function<void (unsigned int)> { struct __value_func<void (unsigned int)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } m_unregisterClientCallback; struct function<void (unsigned int)> { struct __value_func<void (unsigned int)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } m_beginProcessingCallback; struct function<void (unsigned int)> { struct __value_func<void (unsigned int)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } m_endProcessingCallback; } admCallbacks;
    id<ADMConfigurationProtocol> admConfigurator;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)negotiateConfigurationChange:(id)a0 error:(id *)a1;
- (void)startIO;
- (id)adaptToConfigurationChange:(id)a0 error:(id *)a1 inputStreamIndicesInIOProc:(id)a2 outputStreamIndicesInIOProc:(id)a3;
- (id)initWithBundleID:(id)a0 withLogger:(id)a1 andADMConfigurator:(id)a2 andHALDSPFactory:(id)a3;
- (void)stopIO;

@end
