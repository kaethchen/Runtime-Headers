@class NSLock, PKShoveOptions, PKShoveDataStore;

@interface PKCoreShove : NSObject {
    NSLock *_shoveLock;
    PKShoveOptions *_options;
    PKShoveDataStore *_dataStore;
}

@property (copy) id /* block */ loggingBlock;
@property (copy) id /* block */ errorBlock;

+ (id /* block */)genericSyslogLoggingBlock;

- (id)init;
- (void).cxx_destruct;
- (int)shoveWithOptions:(id)a0;

@end
