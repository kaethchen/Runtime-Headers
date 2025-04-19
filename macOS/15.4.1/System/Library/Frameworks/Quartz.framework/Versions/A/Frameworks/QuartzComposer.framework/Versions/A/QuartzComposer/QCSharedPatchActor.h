@class NSMutableDictionary;

@interface QCSharedPatchActor : QCPatchActor {
    NSMutableDictionary *_inspectorCache;
}

- (void)dealloc;
- (id)init;
- (id)inspectorForPatch:(id)a0;

@end
