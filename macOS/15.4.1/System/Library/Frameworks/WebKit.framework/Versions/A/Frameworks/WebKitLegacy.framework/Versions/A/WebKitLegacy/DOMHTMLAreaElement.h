@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement

@property (copy) NSString *alt;
@property (copy) NSString *coords;
@property BOOL noHref;
@property (copy) NSString *shape;
@property (copy) NSString *target;
@property (copy) NSString *accessKey;
@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *href;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *search;
@property (readonly, copy) NSString *hashName;

- (id)origin;
- (id)ping;
- (id)rel;
- (void)setRel:(id)a0;
- (id)relList;
- (void)setPing:(id)a0;

@end
