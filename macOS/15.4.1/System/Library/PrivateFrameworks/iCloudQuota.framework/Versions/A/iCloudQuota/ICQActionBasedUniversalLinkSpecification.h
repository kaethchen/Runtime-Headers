@class NSString, NSDictionary, NSURL, ICQLink;

@interface ICQActionBasedUniversalLinkSpecification : NSObject {
    NSDictionary *_serverDict;
}

@property (readonly, copy, nonatomic) NSDictionary *links;
@property (readonly, nonatomic) ICQLink *defaultLink;
@property (readonly, nonatomic) NSURL *defaultServerUIURL;
@property (readonly, nonatomic) NSURL *defaultDynamicUIRouteURL;
@property (readonly, nonatomic) NSString *defaultPurchaseAttribution;

- (void).cxx_destruct;
- (id)dynamicUIRouteURLForKey:(id)a0;
- (id)icqLinkForContext:(id)a0;
- (id)initWithServerDictionary:(id)a0;
- (id)purchaseAttributionForKey:(id)a0;
- (id)serverUIURLForKey:(id)a0;

@end
