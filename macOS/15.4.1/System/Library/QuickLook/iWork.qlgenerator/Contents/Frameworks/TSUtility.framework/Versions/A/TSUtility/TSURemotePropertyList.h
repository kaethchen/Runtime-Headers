@class NSURL, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TSURemotePropertyList : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_propertyList;
    NSObject<OS_dispatch_queue> *_checkQueue;
    NSObject<OS_dispatch_source> *_updateTimer;
    BOOL _didUpdateAtLeastOnce;
}

@property (readonly, nonatomic) NSURL *remoteURL;
@property (readonly, nonatomic) NSURL *localURL;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)URLRequest;
- (void)checkForUpdateWithCompletionHandler:(id /* block */)a0;
- (id)deserializePropertyListData:(id)a0 error:(out id *)a1;
- (id)initWithRemoteURL:(id)a0 localURL:(id)a1;
- (void)processDidResume:(id)a0;
- (void)processPropertyList:(id)a0;
- (void)processResponse:(id)a0 data:(id)a1 error:(id)a2;
- (void)processWillSuspend:(id)a0;
- (void)startUpdateTimer;
- (double)timeIntervalUntilNextUpdate;
- (void)updateIfNeededWithCompletionHandler:(id /* block */)a0;
- (id)validateUserDefaultsDownloadURL:(id)a0;

@end
