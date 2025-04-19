@class ADConfidenceLevelRanges, NSMutableDictionary, NSDictionary, NSURL;

@interface ADNetworkProvider : NSObject {
    NSMutableDictionary *_sizesForInput;
    NSMutableDictionary *_sizesForOutput;
    NSMutableDictionary *_inputBufferMap;
    NSMutableDictionary *_outputBufferMap;
    NSDictionary *_networkMetadata;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, retain, nonatomic) ADConfidenceLevelRanges *confidenceLevelRanges;
@property (readonly, nonatomic) NSDictionary *layoutNamesDict;

+ (id)getAlternativePathForNetwork:(id)a0;
+ (BOOL)getAndVerifySizesFromConfig:(id)a0 inDictionary:(id)a1 forKey:(id)a2 sizes:(id)a3 layout:(unsigned long long *)a4;
+ (id)getConfigFolderForNetwork:(id)a0;
+ (id)getDefaultPathForNetwork:(id)a0 allowPrecompiledModel:(BOOL)a1;
+ (id)providerForNetwork:(id)a0;
+ (id)providerForNetwork:(id)a0 espressoEngine:(unsigned long long)a1;
+ (id)providerForNetwork:(id)a0 requestedLayouts:(id)a1;
+ (id)providerForNetwork:(id)a0 requestedLayouts:(id)a1 espressoEngine:(unsigned long long)a2;
+ (id)supportedSizesForSizesDict:(id)a0 key:(id)a1 expectedPixelFormat:(unsigned int)a2;
+ (void)updateSizeForItem:(id)a0 fromShape:(id)a1 customStrides:(id)a2 forLayout:(unsigned long long)a3 target:(id)a4;

- (void).cxx_destruct;
- (id)metadataForKey:(id)a0;
- (id)bufferNameForInputType:(id)a0;
- (id)bufferNameForOutputType:(id)a0;
- (id)bufferNameForType:(id)a0 isInput:(BOOL)a1;
- (id)descriptorForBuffer:(id)a0 isInput:(BOOL)a1 pixelFormat:(unsigned int)a2;
- (id)descriptorForBufferOfType:(id)a0 isInput:(BOOL)a1 pixelFormat:(unsigned int)a2;
- (id)generateLayoutNamesDictForFunction:(id)a0;
- (id)initWithNetwork:(id)a0 requestedLayouts:(id)a1 espressoEngine:(unsigned long long)a2;
- (id)layoutNamesDictForFunction:(id)a0;
- (BOOL)processConfig:(id)a0 inDictionary:(id)a1 forLayout:(unsigned long long)a2;
- (id)supportedSizesForInput:(id)a0 expectedPixelFormat:(unsigned int)a1;
- (id)supportedSizesForOutput:(id)a0 expectedPixelFormat:(unsigned int)a1;

@end
