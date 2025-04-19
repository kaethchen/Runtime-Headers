@interface _VZCPUExitContext : NSObject {
    struct unique_ptr<Vz::CpuExitContextMessenger, std::default_delete<Vz::CpuExitContextMessenger>> { struct __compressed_pair<Vz::CpuExitContextMessenger *, std::default_delete<Vz::CpuExitContextMessenger>> { struct CpuExitContextMessenger *__value_; } __ptr_; } _messenger;
    struct CpuExitInfo { unsigned int cpu_index; struct { unsigned int reason; struct { unsigned long long syndrome; unsigned long long virtual_address; unsigned long long physical_address; } exception; } cpu_exit; } _cpuExitInfo;
}

@property (readonly) unsigned long long CPUIndex;
@property (readonly) struct { unsigned int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } CPUExit;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)getPhysicalAddress:(unsigned long long *)a0 forVirtualAddress:(unsigned long long)a1 error:(id *)a2;
- (BOOL)getRegister:(unsigned int)a0 value:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)getSIMDRegister:(unsigned int)a0 value:(unsigned __int128 *)a1 error:(id *)a2;
- (BOOL)getSystemRegister:(unsigned short)a0 value:(unsigned long long *)a1 error:(id *)a2;
- (id)guestMemoryAtPhysicalAddress:(unsigned long long)a0 length:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setRegister:(unsigned int)a0 value:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setSIMDRegister:(unsigned int)a0 value:(unsigned __int128)a1 error:(id *)a2;
- (BOOL)setSystemRegister:(unsigned short)a0 value:(unsigned long long)a1 error:(id *)a2;

@end
