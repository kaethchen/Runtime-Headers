@interface CryptoKitPrivate.KVACClient : NSObject {
    void /* unknown type, empty encoding */ client;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0 serverCommitmentsData:(id)a1 presentationLimit:(long long)a2 error:(id *)a3;
- (id)makeCredentialWithResponseData:(id)a0 error:(id *)a1;
- (id)makeRequestAndReturnError:(id *)a0;

@end
