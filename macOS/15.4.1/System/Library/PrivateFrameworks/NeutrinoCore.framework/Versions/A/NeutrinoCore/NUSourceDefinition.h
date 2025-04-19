@class NSDictionary;

@interface NUSourceDefinition : NSObject

@property (copy, nonatomic) NSDictionary *sourceOptions;

+ (id)imageSourceDefinitionWithURL:(id)a0 options:(id)a1;
+ (id)livePhotoSourceDefinitionWithImage:(id)a0 video:(id)a1 options:(id)a2;
+ (id)videoSourceDefinitionWithURL:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (long long)mediaType;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
