@class NSString, AMSBagKeySet, NSURL, AMSProcessInfo, NSNumber;
@protocol AMSBagProtocol;

@interface AMSClipMediaTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSString *bundleID;
@property (retain) NSString *clientID;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSNumber *externalVersionID;
@property (retain) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)perform;
- (id)_componentsPromise;
- (id)_performJourneysLookup;
- (id)_performNetworkLookup;
- (id)initWithClientID:(id)a0 bundleID:(id)a1 URL:(id)a2 bag:(id)a3;

@end
