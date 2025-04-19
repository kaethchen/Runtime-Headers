@class NSDictionary, NSURL, NSDate, APUnfairLock;

@interface APSettingsStorageServer : NSObject <APSettingsStorableProtocol>

@property BOOL didFetchFromServer;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (readonly, nonatomic) NSDictionary *defaults;
@property (retain, nonatomic) NSDictionary *serverData;
@property (retain, nonatomic) APUnfairLock *lock;

+ (id)baseServerURL;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (id)valueForKey:(id)a0;
- (id)initWithDefaultValues:(id)a0;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (void)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)fetchNewServerData;
- (id)initWithURL:(id)a0 headers:(id)a1 defaultValues:(id)a2;
- (void)retrieveServerData;

@end
