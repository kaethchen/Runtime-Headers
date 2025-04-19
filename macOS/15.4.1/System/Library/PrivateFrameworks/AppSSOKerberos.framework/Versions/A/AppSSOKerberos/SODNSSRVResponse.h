@class NSString;

@interface SODNSSRVResponse : NSObject

@property (retain, nonatomic) NSString *host;
@property (nonatomic) unsigned short port;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
