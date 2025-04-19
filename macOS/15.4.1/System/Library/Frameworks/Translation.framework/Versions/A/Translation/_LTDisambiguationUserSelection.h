@class NSString, _LTDirectedEdge;

@interface _LTDisambiguationUserSelection : NSObject <NSCopying>

@property (readonly, copy, nonatomic) _LTDirectedEdge *edge;
@property (readonly, copy, nonatomic) NSString *sourceSnippet;
@property (readonly, nonatomic) unsigned long long linkIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEdge:(id)a0 sourceSnippet:(id)a1 linkIndex:(unsigned long long)a2;

@end
