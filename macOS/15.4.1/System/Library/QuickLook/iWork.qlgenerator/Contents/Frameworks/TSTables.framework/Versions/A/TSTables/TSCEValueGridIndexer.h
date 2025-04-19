@interface TSCEValueGridIndexer : NSObject <NSCopying> {
    struct TSCEGridCoord { unsigned int column; unsigned int row; } _topLeft;
    struct TSCEGridDimensions { unsigned int width; unsigned int height; } _dimensions;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithTopLeft:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 dimensions:(struct TSCEGridDimensions { unsigned int x0; unsigned int x1; })a1;

@end
