@class CoreDAVLeafItem, CoreDAVItemWithHrefChildItem;

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *apsBundleID;
@property (retain, nonatomic) CoreDAVLeafItem *courierServer;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *subscriptionURL;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *tokenURL;
@property (retain, nonatomic) CoreDAVLeafItem *apsEnv;
@property (retain, nonatomic) CoreDAVLeafItem *refreshInterval;
@property (retain, nonatomic) CoreDAVLeafItem *xmppServer;
@property (retain, nonatomic) CoreDAVLeafItem *xmppURI;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
