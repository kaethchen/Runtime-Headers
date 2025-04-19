@class NSDictionary, NSMutableDictionary;

@interface CSUSceneNetV5SceneTaxonomyAttributes : NSObject {
    NSDictionary *_attributePaths;
    NSMutableDictionary *_attributes;
}

- (void).cxx_destruct;
- (id)attributeForKey:(id)a0 label:(id)a1 defaultValue:(id)a2;
- (id)initWithAttributePaths:(id)a0 error:(id *)a1;

@end
