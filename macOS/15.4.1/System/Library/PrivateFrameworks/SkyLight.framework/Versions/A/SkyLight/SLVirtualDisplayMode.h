@interface SLVirtualDisplayMode : NSObject

@property (nonatomic) double refreshDeadline;
@property (nonatomic) unsigned long long eotf;
@property (nonatomic) unsigned long long options;
@property (readonly, nonatomic) struct { unsigned int width; unsigned int height; } sizeInPixels;
@property (readonly, nonatomic) struct { unsigned int width; unsigned int height; } sizeInPoints;
@property (readonly, nonatomic) float refreshRate;

+ (id)modeWithBackendMode:(id)a0;
+ (id)modeWithDictionaryRepresentation:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithSizeInPixels:(struct { unsigned int x0; unsigned int x1; })a0 sizeInPoints:(struct { unsigned int x0; unsigned int x1; })a1 refreshRate:(float)a2 error:(id *)a3;
- (BOOL)isEqualToMode:(id)a0;

@end
