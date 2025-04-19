@class NSString, PGGraphVisualLookupSceneNodeCollection;

@interface PGGraphVisualLookupSceneNode : PGGraphOptimizedNode {
    unsigned long long _sceneIdentifier;
    BOOL _isSensitive;
    unsigned char _sceneDomain;
    NSString *_label;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, nonatomic) unsigned char sceneDomain;
@property (readonly, nonatomic) unsigned long long sceneIdentifier;
@property (readonly, nonatomic) PGGraphVisualLookupSceneNodeCollection *collection;

+ (id)filter;

- (id)description;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithSceneIdentifier:(unsigned long long)a0 name:(id)a1 sceneDomain:(unsigned char)a2 isSensitive:(BOOL)a3;
- (id)propertyDictionary;

@end
