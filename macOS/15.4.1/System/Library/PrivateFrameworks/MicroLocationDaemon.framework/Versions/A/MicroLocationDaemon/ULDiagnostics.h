@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ULDiagnostics : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } providersLock;
@property (retain, nonatomic) NSHashTable *providers;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long stateHandle;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeProvider:(id)a0;
- (void)addProvider:(id)a0;
- (id)initWithLabel:(id)a0;
- (void)_registerStateHandler;
- (void)_withLock:(id /* block */)a0;
- (id)_diagnosticsInfo;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_stateDataForInfo:(id)a0;

@end
