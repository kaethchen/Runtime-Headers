@interface PGSearchEntityPersister : NSObject {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ graphSearchEntityDonationEnabled;
    void /* unknown type, empty encoding */ batchSize;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)persistSearchEntitiesFromSearchEntityProvider:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
