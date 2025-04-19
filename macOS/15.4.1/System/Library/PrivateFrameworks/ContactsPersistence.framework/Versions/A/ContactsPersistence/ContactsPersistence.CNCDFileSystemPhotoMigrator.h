@interface ContactsPersistence.CNCDFileSystemPhotoMigrator : CNCDMigrator {
    void /* unknown type, empty encoding */ filesystem;
    void /* unknown type, empty encoding */ coredata;
    void /* unknown type, empty encoding */ base;
    void /* unknown type, empty encoding */ logger;
}

- (void).cxx_destruct;
- (void)migrate;
- (id)initWithContext:(id)a0 store:(id)a1;

@end
