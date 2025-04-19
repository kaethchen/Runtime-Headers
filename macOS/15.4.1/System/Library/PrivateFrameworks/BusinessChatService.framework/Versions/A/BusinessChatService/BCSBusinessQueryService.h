@class NSString, NSMutableDictionary, NSDate, NSLock, NSObject;
@protocol BCSXPCDaemonConnectionProtocol, OS_dispatch_queue;

@interface BCSBusinessQueryService : NSObject <BCSXPCDaemonBusinessEmailClientInterface>

@property (readonly, nonatomic) id<BCSXPCDaemonConnectionProtocol> connection;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;
@property (retain) NSDate *lastTimeoutDate;
@property (retain, nonatomic) NSMutableDictionary *requestsById;
@property (retain, nonatomic) NSLock *requestLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (id)init;
- (void).cxx_destruct;
- (void)fetchBusinessCallerMetadataWithPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)isBusinessCallerRegisteredForPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (id)cachedBusinessMetadataForEmail:(id)a0 error:(id *)a1;
- (void)fetchBusinessMetadataForEmails:(id)a0 perItemCallback:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchBusinessLogoForBusinessIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchBusinessMetadataForEmailIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_deleteInMemoryCache;
- (void)_fetchBusinessItemWithDetailsForPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)_isBusinessRegisteredForURL:(id)a0 chopURL:(BOOL)a1 completion:(id /* block */)a2;
- (id)businessItemForPhoneNumber:(id)a0 isChatSuggestVisible:(BOOL *)a1 error:(id *)a2;
- (id)businessItemForPhoneNumber:(id)a0 isMessageable:(BOOL *)a1 isChatSuggestVisible:(BOOL *)a2 error:(id *)a3;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)clearCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)clearExpiredCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)didFetchBusinessMetadata:(id)a0 forEmailIdentifier:(id)a1 requestId:(id)a2 error:(id)a3 reply:(id /* block */)a4;
- (void)didFetchBusinessMetadataForEmailsForRequestId:(id)a0 error:(id)a1 reply:(id /* block */)a2;
- (void)fetchBusinessCallerMetadataForPhoneNumber:(id)a0 metadataCallback:(id /* block */)a1 logoURLCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fetchBusinessItemForPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)fetchBusinessItemWithPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)fetchBusinessMetadataForEmail:(id)a0 completion:(id /* block */)a1;
- (void)fetchLinkItemWithHash:(id)a0 completion:(id /* block */)a1;
- (void)fetchLinkItemWithURL:(id)a0 chopURL:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchLinkItemWithURL:(id)a0 completion:(id /* block */)a1;
- (void)fetchSquareIconDataForBusinessItem:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnection:(id)a0 clientBundleIdentifier:(id)a1;
- (void)isBusinessRegisteredForPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)isBusinessRegisteredForURL:(id)a0 chopURL:(BOOL)a1 completion:(id /* block */)a2;
- (void)isBusinessRegisteredForURL:(id)a0 completion:(id /* block */)a1;
- (void)prefetchBloomFilterAndConfigCacheWithCompletion:(id /* block */)a0;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)a0;

@end
