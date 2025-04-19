@class NSURL;

@interface CRKFileActionPair : NSObject

@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSURL *destinationURL;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;

@end
