@class NSString;

@interface SearchUIAsyncSectionLoaderRequest : NSObject

@property (retain) NSString *identifier;
@property (copy) id /* block */ computeBlock;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
