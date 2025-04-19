@interface CGVirtualDisplayMode : NSObject {
    unsigned int _transferFunction;
}

@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) double refreshRate;

- (id)initWithWidth:(unsigned int)a0 height:(unsigned int)a1 refreshRate:(double)a2;
- (id)initWithWidth:(unsigned int)a0 height:(unsigned int)a1 refreshRate:(double)a2 transferFunction:(unsigned int)a3;
- (void)setTransferFunction:(unsigned int)a0;
- (unsigned int)transferFunction;

@end
