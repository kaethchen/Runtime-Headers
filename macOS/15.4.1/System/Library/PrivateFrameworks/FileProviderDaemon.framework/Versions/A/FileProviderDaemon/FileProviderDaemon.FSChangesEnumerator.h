@interface FileProviderDaemon.FSChangesEnumerator : NSObject {
    void /* unknown type, empty encoding */ currentToken;
    void /* unknown type, empty encoding */ numberOfChanges;
    void /* unknown type, empty encoding */ numberOfReaderCaughtUp;
    void /* unknown type, empty encoding */ observedID;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ reader;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ startupFSEventID;
    void /* unknown type, empty encoding */ source;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
