@class NSArray, ICStoreRequestContext, NSData;

@interface ICRadioFetchMetadataRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *storeAdamIDs;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (copy, nonatomic) NSData *timedMetadataData;
@property (nonatomic) long long qualityOfService;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(id /* block */)a0;

@end
