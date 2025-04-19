@class NSString;

@interface OrchestratorClientIOProc : NSObject <ADMConfigurationProtocol> {
    unsigned int mDeviceID;
    void /* function */ *mIOProcID;
    struct IOProcBrain { void /* function */ **_vptr$IOProcCallable; void /* function */ **_vptr$ADMIOConfigurable; struct ClientIOProc { void /* function */ *mProvidedCallback; void *mProvidedClientData; } mClientIOProc; struct ADMIO { void /* function */ **_vptr$IOProcCallable; void /* function */ **_vptr$ADMIOConfigurable; struct ADMIOConfiguration { unsigned int contextID; unsigned long long frameBufferSize; struct function<void (unsigned int, const AMCP::Proc_Cycle_Info &, unsigned long, AMCP::Proc_Stream *, unsigned long, AMCP::Proc_Stream *)> { struct __value_func<void (unsigned int, const AMCP::Proc_Cycle_Info &, unsigned long, AMCP::Proc_Stream *, unsigned long, AMCP::Proc_Stream *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } admCallback; struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } inputStreamIndicesInIOProc; struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } outputStreamIndicesInIOProc; } ioInfo; struct ADMStreamsAndABLs { struct vector<AMCP::Proc_Stream, std::allocator<AMCP::Proc_Stream>> { struct Proc_Stream *__begin_; struct Proc_Stream *__end_; struct __compressed_pair<AMCP::Proc_Stream *, std::allocator<AMCP::Proc_Stream>> { struct Proc_Stream *__value_; } __end_cap_; } streams; struct vector<AudioBufferList, std::allocator<AudioBufferList>> { struct AudioBufferList *__begin_; struct AudioBufferList *__end_; struct __compressed_pair<AudioBufferList *, std::allocator<AudioBufferList>> { struct AudioBufferList *__value_; } __end_cap_; } abls; } admInputs; struct ADMStreamsAndABLs { struct vector<AMCP::Proc_Stream, std::allocator<AMCP::Proc_Stream>> { struct Proc_Stream *__begin_; struct Proc_Stream *__end_; struct __compressed_pair<AMCP::Proc_Stream *, std::allocator<AMCP::Proc_Stream>> { struct Proc_Stream *__value_; } __end_cap_; } streams; struct vector<AudioBufferList, std::allocator<AudioBufferList>> { struct AudioBufferList *__begin_; struct AudioBufferList *__end_; struct __compressed_pair<AudioBufferList *, std::allocator<AudioBufferList>> { struct AudioBufferList *__value_; } __end_cap_; } abls; } admOutputs; } admIOProc; } mIOBrain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)configure:(const void *)a0;
- (int)createHALIOProc:(unsigned int)a0;
- (int)destroyHALIOProc;
- (int)installClientIOProc:(void /* function */ *)a0 data:(void *)a1;
- (int)startHALIOProc;
- (int)startHALIOProcAtTime:(unsigned long long)a0;
- (int)stopHALIOProc;
- (int)uninstallClientIOProc;

@end
