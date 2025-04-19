@class NSObject;
@protocol OS_dispatch_queue;

@interface HPDClient : HPDBaseClient {
    struct __CFMessagePort { } *_serverPortRef;
    struct __CFMessagePort { } *_localPortRef;
    NSObject<OS_dispatch_queue> *_messageQueue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)preferredLocalizations;
- (BOOL)stop;
- (void)abort;
- (BOOL)performQuery:(id)a0;
- (BOOL)cancelQuery:(id)a0;
- (BOOL)collect;
- (id)sendMessage:(int)a0 withData:(id)a1 withReply:(BOOL)a2;
- (BOOL)_registerBookWithIdentifier:(id)a0 appBundleURL:(id)a1 bookVersion:(id)a2 bookURL:(id)a3;
- (id)bookList;
- (id)bookWithIdentifier:(id)a0;
- (struct __CFMessagePort { } *)createLocalPortIfNeeded;
- (BOOL)createServerPortIfNeeded;
- (id)indexedBookIDs;
- (BOOL)registerBookWithIdentifier:(id)a0 appBundleURL:(id)a1 bookVersion:(id)a2 bookURL:(id)a3;

@end
