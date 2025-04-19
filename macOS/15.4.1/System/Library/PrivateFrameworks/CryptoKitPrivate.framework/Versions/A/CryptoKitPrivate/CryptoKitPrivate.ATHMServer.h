@interface CryptoKitPrivate.ATHMServer : NSObject {
    void /* unknown type, empty encoding */ server;
}

- (id)init;
- (void).cxx_destruct;
- (id)respondWithRequestData:(id)a0 b:(id)a1 error:(id *)a2;
- (id)exportKeyCommitmentsAndReturnError:(id *)a0;
- (id)readBitWithPresentationData:(id)a0 error:(id *)a1;

@end
