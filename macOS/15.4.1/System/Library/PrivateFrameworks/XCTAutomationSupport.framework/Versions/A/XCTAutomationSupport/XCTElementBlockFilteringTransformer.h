@class NSString, NSSet;

@interface XCTElementBlockFilteringTransformer : NSObject <XCTElementSetTransformer>

@property (readonly, copy) id /* block */ filter;
@property (copy) NSString *transformationDescription;
@property (readonly) BOOL supportsAttributeKeyPathAnalysis;
@property BOOL stopsOnFirstMatch;
@property (readonly, copy) NSSet *elementTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)provideCapabilitiesToBuilder:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (id)initWithBlockFilter:(id /* block */)a0;
- (id)iteratorForInput:(id)a0;
- (id)requiredKeyPathsOrError:(id *)a0;
- (id)transform:(id)a0 relatedElements:(id *)a1;

@end
