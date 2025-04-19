@class IKCacheNode;

@interface IKCacheVRamNode : IKLinkedListNode {
    IKCacheNode *_parent;
    unsigned int _session;
    unsigned int _memoryUsage;
    unsigned int _packerID;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textureRect;
}

- (id)parent;
- (unsigned int)session;
- (void)setSession:(unsigned int)a0;
- (void)setParent:(id)a0;
- (void)setMemoryUsage:(unsigned int)a0;
- (void)willDie;
- (void)setTextureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned int)memoryUsage;
- (BOOL)packed;
- (unsigned int)packerID;
- (void)setPackerID:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textureRect;

@end
