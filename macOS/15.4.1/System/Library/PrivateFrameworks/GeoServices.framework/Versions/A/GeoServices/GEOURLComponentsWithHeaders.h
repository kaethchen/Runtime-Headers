@class GEOURLWithHeaders, NSMutableDictionary, NSURL, NSURLComponents;

@interface GEOURLComponentsWithHeaders : NSObject

@property (readonly, nonatomic) NSURLComponents *URLComponents;
@property (readonly, nonatomic) NSMutableDictionary *headerFields;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) GEOURLWithHeaders *URLWithHeaders;

- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithURL:(id)a0;
- (void)appendPathComponents:(id)a0;
- (id)initWithURLComponents:(id)a0;
- (void)updateQueryItemsWithBlock:(id /* block */)a0;

@end
