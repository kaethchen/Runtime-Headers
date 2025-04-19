@interface AMSBagUnderlyingDataPersistence : NSObject {
    void /* unknown type, empty encoding */ directoryURL;
}

+ (id)persistenceWithDefaultDirectory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDirectoryURL:(id)a0;
- (BOOL)persist:(id)a0 error:(id *)a1;
- (BOOL)removeUnderlyingDataFor:(id)a0 error:(id *)a1;
- (id)underlyingDataFor:(id)a0 error:(id *)a1;

@end
