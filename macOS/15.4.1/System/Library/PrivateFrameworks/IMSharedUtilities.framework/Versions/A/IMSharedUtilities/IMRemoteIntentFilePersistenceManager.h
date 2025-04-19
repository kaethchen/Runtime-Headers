@interface IMRemoteIntentFilePersistenceManager : NSObject {
    void /* unknown type, empty encoding */ _manifest;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)touchFilePath:(id)a0 forGUID:(id)a1;
- (void)touchFilePaths:(id)a0 forGUID:(id)a1;

@end
