@class NSString;

@interface NDANFImageResource : NDANFResource

@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) struct CGSize { double width; double height; } dimensions;
@property (readonly, nonatomic) BOOL isTagged;

- (void).cxx_destruct;
- (id)initWithResourceDictionary:(id)a0;

@end
