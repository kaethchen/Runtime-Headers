@class NSURL, TSUBezierPath;

@interface TSDHyperlinkRegion : NSObject

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) TSUBezierPath *bezierPath;

+ (id)hyperlinkRegionWithURL:(id)a0 bezierPath:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 bezierPath:(id)a1;

@end
