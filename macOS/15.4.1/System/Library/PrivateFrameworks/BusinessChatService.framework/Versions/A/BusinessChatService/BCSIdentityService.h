@class NSString, NSMutableDictionary, NSObject;
@protocol BCSIDSServiceFactoryProtocol, BCSIDSQueryControllerProtocol, OS_dispatch_queue, BCSIdentityAccountProtocol;

@interface BCSIdentityService : NSObject <BCSIdentityServiceProtocol> {
    id<BCSIdentityAccountProtocol> _businessChatAccount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *idStatusCompletionBlocks;
@property (retain, nonatomic) id<BCSIDSServiceFactoryProtocol> IDSServiceFactory;
@property (retain, nonatomic) id<BCSIDSQueryControllerProtocol> IDSQueryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)loginID;
- (void)idStatusUpdatedForDestinations:(id)a0 service:(id)a1;
- (void)_addIDSIDQueryControllerDelegate;
- (void)_handleIDStatusCompletionBlocksForBizID:(id)a0 idStatus:(long long)a1;
- (id)businessChatAccount;
- (id)initWithIDSServiceFactory:(id)a0 IDSQueryController:(id)a1;
- (void)refreshIDStatusForBizID:(id)a0 completion:(id /* block */)a1;
- (void)warmBusinessChatAccountCache;

@end
