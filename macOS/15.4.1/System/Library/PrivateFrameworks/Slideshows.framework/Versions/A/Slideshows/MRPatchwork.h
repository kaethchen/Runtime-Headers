@class NSMutableArray;

@interface MRPatchwork : NSObject {
    NSMutableArray *_patches;
}

- (void)dealloc;
- (id)init;
- (void)addPatch:(id)a0;
- (id)patchworkWithPatch:(id)a0;
- (void)removeAllPatches;

@end
