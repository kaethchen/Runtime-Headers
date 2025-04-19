@class NSString, ICQDaemonOffer;

@interface ICQOfferCacheObject : NSObject

@property (retain, nonatomic) ICQDaemonOffer *daemonOffer;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)offer;
- (id)initWithDaemonOffer:(id)a0 bundleIdentifier:(id)a1;

@end
