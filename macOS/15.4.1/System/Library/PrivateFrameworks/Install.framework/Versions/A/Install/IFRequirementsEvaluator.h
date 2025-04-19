@class NSDictionary;

@interface IFRequirementsEvaluator : NSObject {
    unsigned long long _domainMask;
    NSDictionary *_packageRegistryDict;
}

+ (id)sharedEvaluator;

- (void)dealloc;
- (id)init;
- (void)_setResultTitleAndMessage:(id)a0;
- (BOOL)doesEvaluateSecurely:(id)a0;
- (id)packageRegistryDictionary;
- (void)setPackageRegistry:(id)a0;
- (id)testRequirements:(id)a0 failureLimit:(unsigned int)a1 reference:(id)a2 onTarget:(id)a3;

@end
