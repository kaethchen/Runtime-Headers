@class NSObject;
@protocol OS_dispatch_queue, TUBusinessServiceProviderProtocol;

@interface TUBusinessServicesMetadataDataProvider : NSObject

@property (class, readonly, nonatomic) TUBusinessServicesMetadataDataProvider *sharedInstance;

@property (readonly, nonatomic) id<TUBusinessServiceProviderProtocol> businessQueryService;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ metadataQueryHandler;

- (id)init;
- (void).cxx_destruct;
- (void)fetchBusinessServiceInformationForHandleValue:(id)a0 completion:(id /* block */)a1;
- (id)initWithBusinessService:(id)a0;
- (BOOL)isValidBusinessItem:(id)a0;

@end
