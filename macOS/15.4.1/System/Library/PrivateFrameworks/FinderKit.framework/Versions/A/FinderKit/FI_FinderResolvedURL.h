@class NSURL;

@interface FI_FinderResolvedURL : NSObject {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _node;
}

@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id).cxx_construct;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)node;
- (id)initWithURL:(id)a0 andNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;

@end
