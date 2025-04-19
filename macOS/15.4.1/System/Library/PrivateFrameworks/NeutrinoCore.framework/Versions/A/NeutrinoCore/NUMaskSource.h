@class NSString;

@interface NUMaskSource : NUSource

@property (readonly, nonatomic) NSString *maskIdentifier;
@property (readonly, nonatomic) struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; } extent;
@property (readonly, nonatomic) struct { long long x0; long long x1; } scale;

- (id)_initWithDefinition:(id)a0 identifier:(id)a1 extent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 scale:(struct { long long x0; long long x1; })a3;
- (id)initWithContentsOfURL:(id)a0 identifier:(id)a1 extent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 scale:(struct { long long x0; long long x1; })a3;
- (id)initWithImage:(id)a0 identifier:(id)a1 extent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 scale:(struct { long long x0; long long x1; })a3;
- (id)initWithImageBuffer:(id)a0 identifier:(id)a1 extent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 scale:(struct { long long x0; long long x1; })a3;
- (id)newSourceNode:(out id *)a0;
- (id)sourceImage:(out id *)a0;

@end
