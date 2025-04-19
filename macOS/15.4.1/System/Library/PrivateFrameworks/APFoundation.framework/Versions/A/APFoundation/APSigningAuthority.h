@class NSString, APSigningContextStorage;

@interface APSigningAuthority : NSObject <APSigningAuthorizable>

@property (retain, nonatomic) APSigningContextStorage *signingContextStorage;
@property (nonatomic) BOOL isUsed;
@property (retain, nonatomic) NSString *poolName;
@property (nonatomic) long long failureError;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long signpostID;
@property (readonly, nonatomic) BOOL usingStashedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)signatureForData:(id)a0 error:(id *)a1;
- (id)_failureString:(long long)a0;
- (void)setupWithCompletion:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_verifyContext:(void *)a0;
- (BOOL)_createAttribute:(void **)a0 enableStashing:(BOOL *)a1;
- (id)_createContext:(void **)a0 requestStashed:(BOOL *)a1;
- (void)_destroyObject:(void **)a0 ofType:(long long)a1;
- (id)_getEncodedStringFromFPDIDataRef:(void *)a0 withLength:(unsigned int)a1;
- (id)_handleInitResponse:(void *)a0 length:(unsigned int)a1 forContextRef:(void *)a2 error:(id)a3;
- (void)_handleSetupResponse:(void *)a0 length:(unsigned int)a1 forContextRef:(unsigned long long *)a2 error:(id)a3;
- (void)_sendInitRequest:(id)a0 forContextRef:(void *)a1 withCompletion:(id /* block */)a2;
- (void)_sendSetupRequest:(id)a0 forContextRef:(unsigned long long *)a1 withCompletion:(id /* block */)a2;
- (void)_setFailureStateWithError:(long long)a0;
- (void)_setFailureStateWithErrorAndDestroyContext:(long long)a0 contextRef:(void *)a1;
- (void)_setupNewContext:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)_signatureForData:(id)a0 error:(id *)a1;
- (id)initWithPoolName:(id)a0;
- (id)signatureForRawData:(id)a0 error:(id *)a1;

@end
