@interface ANSTForegroundSegmentationConfiguration : ANSTConfiguration

@property (nonatomic) long long networkResolution;
@property (readonly, nonatomic) unsigned long long version;

- (id)description;
- (id)init;
- (id)initWithVersion:(unsigned long long)a0;

@end
