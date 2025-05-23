@interface PXGSpriteMetadataStore : NSObject {
    unsigned short _resizableCapInsetsCapacity;
}

@property (readonly, nonatomic) unsigned short numberOfResizableCapInsets;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; } *resizableCapInsets;

- (void)dealloc;
- (id)init;
- (unsigned short)_indexOfResizableCapInsets:(struct { float x0; float x1; float x2; float x3; })a0;
- (unsigned short)addResizableCapInsets:(struct { float x0; float x1; float x2; float x3; })a0;

@end
