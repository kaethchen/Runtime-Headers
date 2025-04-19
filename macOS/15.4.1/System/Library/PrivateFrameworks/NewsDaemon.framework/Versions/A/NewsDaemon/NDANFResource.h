@class NSURL;

@interface NDANFResource : NSObject

@property (readonly, copy, nonatomic) NSURL *URL;

+ (id)resourceFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithResourceDictionary:(id)a0;

@end
