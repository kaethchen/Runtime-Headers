@class VFXAssetNode, VFXWorld;

@interface VFXAssetRegistry : NSObject <NSSecureCoding> {
    VFXWorld *_world;
    VFXAssetNode *_root;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VFXAssetNode *rootNode;
@property (readonly, nonatomic) VFXWorld *world;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setWorld:(id)a0;

@end
