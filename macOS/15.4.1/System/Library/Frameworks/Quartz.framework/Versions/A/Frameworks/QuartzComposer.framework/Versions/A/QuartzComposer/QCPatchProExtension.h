@interface QCPatchProExtension : NSObject {
    double _transform[16];
    BOOL _patchSetsTransform;
}

- (id)init;
- (double *)getTransform;
- (BOOL)patchSetsTransform;
- (void)setPatchSetsTransform:(BOOL)a0;

@end
