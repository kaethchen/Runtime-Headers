@class NSURL, BRCPQLConnection;

@interface BRCSafeDBHolder : NSObject {
    NSURL *_databaseURL;
}

@property (readonly, nonatomic) BRCPQLConnection *db;

+ (id)newSafeDBHolder:(id)a0 withDatabaseURL:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)closeWithError:(id *)a0;
- (void)asyncClose;
- (void)asyncCloseWithCompletionHandler:(id /* block */)a0;
- (void)closeDatabaseSynchronously:(BOOL)a0 dispatchToSerialQueue:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
