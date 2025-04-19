@class CIImage;

@interface NUCIImageSourceDefinition : NUSingleSourceDefinition

@property (readonly) CIImage *image;
@property (readonly) long long orientation;

- (id)init;
- (void).cxx_destruct;
- (long long)mediaType;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithCIImage:(id)a0 orientation:(long long)a1;

@end
