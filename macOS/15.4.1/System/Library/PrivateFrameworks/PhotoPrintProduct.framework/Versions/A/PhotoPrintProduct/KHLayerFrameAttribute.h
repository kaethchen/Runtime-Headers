@interface KHLayerFrameAttribute : KHFrameAttribute

- (id)init;
- (BOOL)isPersisted;
- (void)persist;
- (void)deleteModel;
- (void)writeValue:(id)a0 toField:(id)a1;

@end
