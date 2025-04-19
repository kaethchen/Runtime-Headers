@class VFXNode, NSString;

@interface VFXPrefabAsset : NSObject <VFXAsset, NSSecureCoding> {
    VFXNode *_rootNode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VFXNode *rootNode;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prefabWithRootNode:(id)a0;

@end
