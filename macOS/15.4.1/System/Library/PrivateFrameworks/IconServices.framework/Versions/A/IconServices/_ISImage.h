@interface _ISImage : NSObject <ISImage>

@property double minimumSize;
@property unsigned int scale;
@property (nonatomic) struct CGImage { } *CGImage;

- (void)dealloc;

@end
