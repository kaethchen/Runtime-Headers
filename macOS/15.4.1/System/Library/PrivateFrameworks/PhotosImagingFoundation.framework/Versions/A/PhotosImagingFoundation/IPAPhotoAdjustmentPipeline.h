@class NSString;

@interface IPAPhotoAdjustmentPipeline : NSObject

@property (readonly, nonatomic) NSString *platform;
@property (readonly, nonatomic) unsigned long long version;

+ (void)initialize;
+ (id)current;
+ (id)pipelineForPlatform:(id)a0 version:(unsigned long long)a1;
+ (id)pipelineForVersion:(unsigned long long)a0;
+ (id)pipelineFromString:(id)a0;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)string;
- (void).cxx_destruct;
- (id)initWithPlatform:(id)a0 version:(unsigned long long)a1;
- (BOOL)isEqualToAdjustmentPipeline:(id)a0;

@end
