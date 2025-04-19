@class WKDOMNode;

@interface DDRange : NSObject

@property (retain, nonatomic) WKDOMNode *node;
@property (nonatomic) long long startOffset;
@property (nonatomic) long long endOffset;

+ (id)rangeWithDOMRange:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDOMRange:(id)a0;

@end
