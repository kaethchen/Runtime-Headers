@interface ABMetadataValidateOperation : ABMetadataOperation {
    BOOL _forceRebuild;
}

- (void)main;
- (id)initWithMetadataManager:(id)a0 andForceRebuild:(BOOL)a1;

@end
