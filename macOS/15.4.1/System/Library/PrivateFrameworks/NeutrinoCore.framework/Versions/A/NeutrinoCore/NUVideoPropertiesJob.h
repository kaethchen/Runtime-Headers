@protocol NUVideoProperties;

@interface NUVideoPropertiesJob : NURenderJob {
    id<NUVideoProperties> _videoProperties;
}

- (void).cxx_destruct;
- (id)result;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsRenderStage;

@end
