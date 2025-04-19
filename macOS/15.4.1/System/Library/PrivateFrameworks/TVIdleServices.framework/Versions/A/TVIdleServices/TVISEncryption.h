@class NSOutputStream, NSInputStream;

@interface TVISEncryption : NSObject

@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (id)_randomSalt;
- (id)_randomDataOfLength:(unsigned long long)a0;
- (id)_errorForInputStream:(id)a0;
- (id)_errorForOutputStream:(id)a0;
- (id)_generateKeyForPassword:(id)a0 salt:(id)a1 error:(id *)a2;
- (id)_initializeDataStreamsForOperation:(unsigned long long)a0 inputURL:(id)a1;
- (id)_nsErrorForCCStatus:(int)a0 operation:(unsigned long long)a1;
- (void)_performOperation:(unsigned long long)a0 atURL:(id)a1 withPassword:(id)a2 completion:(id /* block */)a3;
- (id)_performOperation:(unsigned long long)a0 inputStream:(id)a1 outputStream:(id)a2 withPassword:(id)a3;
- (void)_resolveKeyAndIVForOperation:(unsigned long long)a0 password:(id)a1 inputStream:(id)a2 outputStream:(id)a3 outKey:(id *)a4 outIV:(id *)a5 outError:(id *)a6;
- (void)decryptFileAtURL:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;
- (void)encryptFileAtURL:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;

@end
