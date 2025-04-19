@class NSArray;

@interface ICScannerFeatureTemplate : ICScannerFeature {
    id _tvProps;
}

@property (readonly) NSArray *targets;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 andFunctionalUnit:(id)a1;

@end
