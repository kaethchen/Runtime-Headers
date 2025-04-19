@interface WBSCGImage : NSObject

@property (readonly, nonatomic) struct CGImage { } *CGImage;

+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageByAdoptingCGImage:(struct CGImage { } *)a0;

- (void)dealloc;

@end
