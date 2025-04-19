@class NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionLeasePlaybackRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (nonatomic) BOOL shouldPreventLeaseAcquisition;
@property (nonatomic) BOOL shouldRequireLeaseAcquisition;
@property (nonatomic, getter=isTriggeredByLeasePrevention) BOOL triggeredByLeasePrevention;
@property (nonatomic, getter=isFollowUp) BOOL followUp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;

@end
