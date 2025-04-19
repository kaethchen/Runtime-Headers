@class NSTouchBarItemTreeNode;
@protocol NSTouchBarItemTreeParentNode;

@interface NSTouchBarItemTreePosition : NSObject <NSCopying>

@property (readonly, copy) NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode> *parentNode;
@property (readonly) long long indexInParent;

+ (id)positionInParentNode:(id)a0 atIndex:(long long)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
