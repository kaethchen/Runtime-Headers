@class PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
    BOOL _forSceneNetOnly;
}

- (void).cxx_destruct;
- (id)rootNode;
- (id)nodeForName:(id)a0;
- (id)initForSceneNetOnly:(BOOL)a0;
- (BOOL)nodeExistsForName:(id)a0;
- (id)nodeForIdentifier:(unsigned long long)a0;

@end
