@class NSString, NSURL;

@interface WFWhitelistSite : NSObject

@property (retain) NSString *urlString;
@property (retain) NSURL *url;
@property (readonly, retain) NSString *domainName;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithURLString:(id)a0;
- (BOOL)hasMetasitePrefix:(id)a0;

@end
