@interface NUMaskSourceDefinition : NUCIImageSourceDefinition

@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } croppedExtent;
@property (nonatomic) struct { long long numerator; long long denominator; } scale;

- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithCIImage:(id)a0 croppedExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 scale:(struct { long long x0; long long x1; })a2 orientation:(long long)a3;

@end
