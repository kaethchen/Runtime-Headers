@class ICQIconSpecification, NSString, NSDictionary, NSArray, NSURL, NSNumber, ICQLink;

@interface _ICQBannerSpecification : NSObject {
    NSDictionary *_serverDict;
}

@property (copy, nonatomic) NSString *bannerSource;
@property (retain, nonatomic) ICQIconSpecification *iconSpecification;
@property (readonly, nonatomic) NSDictionary *messageTemplates;
@property (readonly, nonatomic) NSDictionary *titleTemplates;
@property (readonly, nonatomic) NSDictionary *iconDetails;
@property (retain, nonatomic) NSString *linksFormat;
@property (retain, nonatomic) NSArray *links;
@property (retain, nonatomic) ICQLink *dismissLink;
@property (readonly, nonatomic) BOOL isDetailBannerInfoAvailable;
@property (readonly, nonatomic) BOOL placeholderExists;
@property (retain, nonatomic) NSURL *serverUIURL;
@property (readonly, nonatomic) NSURL *dynamicUIRouteURL;
@property (readonly, nonatomic) NSString *purchaseAttribution;
@property (readonly, nonatomic) NSString *reason;
@property (retain, nonatomic) NSNumber *supressUntil;
@property (retain, nonatomic) NSNumber *decayUntil;

- (void).cxx_destruct;
- (id)iconPath;
- (id)messageWithKey:(id)a0;
- (id)_bannerSpecificationParams;
- (void)_setDisplayConfigurations:(id)a0;
- (id)initWithDetailBannerInfo:(id)a0 source:(id)a1;
- (id)initWithServerDictionary:(id)a0;
- (void)setMessageWithServerMessage:(id)a0;
- (id)titleWithKey:(id)a0;

@end
