@class NSString, CIFilter;

@interface _NUCIFilterPipelineBuilder : NSObject <NUPipelineBuilder> {
    CIFilter *_filter;
}

@property (readonly, copy, nonatomic) NSString *filterName;

+ (id)channelFormatForFilterAttributes:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)buildPipeline:(out id *)a0;
- (BOOL)buildPipeline:(id)a0 error:(out id *)a1;
- (id)initWithCIFilterName:(id)a0;

@end
