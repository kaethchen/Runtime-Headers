@interface CLPCUserClient : NSObject {
    struct CLPC { void /* function */ **_vptr$Object; unsigned int object; unsigned int connect; struct unique_ptr<char[], std::default_delete<char[]>> { struct __compressed_pair<char *, std::default_delete<char[]>> { char *__value_; } __ptr_; } rpc_buffer; unsigned long long rpc_buffer_size; } clpc;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init:(id *)a0;
- (unsigned long long)isInContextualPowerMode:(id *)a0;
- (unsigned long long)isInDockMode:(id *)a0;
- (unsigned long long)isInGameMode:(id *)a0;
- (unsigned long long)isInHotInPocketMode:(id *)a0;
- (unsigned long long)isInLowPowerMode:(id *)a0;
- (unsigned long long)isInSustainableMode:(id *)a0;
- (unsigned long long)isInTaskingMode:(id *)a0;
- (id)reportingObfuscationData:(id *)a0;
- (BOOL)setContextualPowerMode:(BOOL)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setDockMode:(BOOL)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setGameMode:(BOOL)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setGameModeOnProcess:(BOOL)a0 targetProcess:(int)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)setHotInPocketMode:(BOOL)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setLowPowerMode:(BOOL)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setSustainableMode:(BOOL)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setTaskingMode:(BOOL)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
