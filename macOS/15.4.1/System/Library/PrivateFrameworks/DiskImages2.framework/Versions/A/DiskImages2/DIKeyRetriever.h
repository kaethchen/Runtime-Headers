@interface DIKeyRetriever : NSObject

+ (BOOL)KKMSKeyWithURL:(id)a0 destKey:(char *)a1 destKeySize:(unsigned long long)a2 error:(id *)a3;
+ (id)newUrl:(id)a0;
+ (BOOL)WKMSKeyWithURL:(id)a0 authData:(const struct AuthData { struct AEAAuthData_impl *x0; } *)a1 destKey:(char *)a2 destKeySize:(unsigned long long)a3 error:(id *)a4;
+ (BOOL)decryptKeyWithData:(id)a0 destKey:(char *)a1 destKeySize:(unsigned long long)a2 error:(id *)a3;
+ (id)getRequestWithURL:(id)a0 error:(id *)a1;
+ (id)hintFormat:(id)a0;
+ (id)jsonResponseWithRequest:(id)a0 session:(id)a1 error:(id *)a2;
+ (id)newACEndpointWithEnvironment:(id)a0 error:(id *)a1;
+ (id)newDawTokenWithError:(id *)a0;
+ (id)newEnvWithDictionary:(id)a0 error:(id *)a1;
+ (id)newSessionWithError:(id *)a0;
+ (id)postRequestWithURL:(id)a0 session:(id)a1 data:(id)a2 error:(id *)a3;
+ (id)requestSynchronousDataWithRequest:(id)a0 session:(id)a1 error:(id *)a2;
+ (BOOL)writeHexKeyToBuffer:(char *)a0 hexKey:(id)a1 error:(id *)a2;

@end
