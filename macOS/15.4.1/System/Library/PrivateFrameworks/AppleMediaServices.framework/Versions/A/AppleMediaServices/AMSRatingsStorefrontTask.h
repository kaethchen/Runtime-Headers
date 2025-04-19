@class NSString, AMSBagKeySet;
@protocol AMSBagProtocol;

@interface AMSRatingsStorefrontTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long mediaType;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)performTask;
- (id)_queryItems;
- (id)_urlBagKeyForMediaType:(unsigned long long)a0;
- (id)_urlForMediaType:(unsigned long long)a0;
- (id)initWithMediaType:(unsigned long long)a0 clientIdentifier:(id)a1 bag:(id)a2;

@end
