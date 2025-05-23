@protocol NUImageProperties;

@interface NUAuxiliaryPropertiesRenderJob : NURenderJob {
    id<NUImageProperties> _imageProperties;
}

- (void).cxx_destruct;
- (id)result;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsRenderStage;

@end
