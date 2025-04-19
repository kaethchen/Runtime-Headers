@class MTLPipelineBufferDescriptorArrayInternal, NSString, NSDictionary, NSArray, MTLProfileControl, MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, MTLLinkedFunctions;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; union { unsigned long long sampleCount; unsigned long long rasterSampleCount; } ; NSString *label; id<MTLFunction> tileFunction; BOOL threadgroupSizeMatchesTileSize; unsigned long long paddingToRemove; unsigned long long colorSampleCount; MTLPipelineBufferDescriptorArrayInternal *tileBuffers; unsigned short maxTotalThreadsPerThreadgroup; long long textureWriteRoundingMode; NSDictionary *pluginData; NSArray *binaryArchives; MTLLinkedFunctions *linkedFunctions; NSArray *preloadedLibraries; unsigned long long maxStackCallDepth; BOOL supportAddingBinaryFunctions; MTLProfileControl *profileControl; unsigned long long maxAccelerationStructureTraversalDepth; NSDictionary *gpuCompilerSPIOptions; long long shaderValidation; long long shaderValidationState; } _private;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)linkedFunctions;
- (void)setSampleCount:(unsigned long long)a0;
- (const struct MTLTileRenderPipelineDescriptorPrivate { id x0; union { unsigned long long x0; unsigned long long x1; } x1; id x2; id x3; BOOL x4; unsigned long long x5; unsigned long long x6; id x7; unsigned short x8; long long x9; id x10; id x11; id x12; id x13; unsigned long long x14; BOOL x15; id x16; unsigned long long x17; id x18; long long x19; long long x20; } *)_descriptorPrivate;
- (id)binaryArchives;
- (id)colorAttachments;
- (unsigned long long)colorSampleCount;
- (id)formattedDescription:(unsigned long long)a0;
- (id)gpuCompilerSPIOptions;
- (id)label;
- (unsigned long long)maxAccelerationStructureTraversalDepth;
- (unsigned long long)maxCallStackDepth;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (id)pluginData;
- (id)preloadedLibraries;
- (unsigned long long)rasterSampleCount;
- (void)reset;
- (unsigned long long)sampleCount;
- (void)setBinaryArchives:(id)a0;
- (void)setGpuCompilerSPIOptions:(id)a0;
- (void)setLabel:(id)a0;
- (void)setLinkedFunctions:(id)a0;
- (void)setPluginData:(id)a0;
- (void)setPreloadedLibraries:(id)a0;
- (void)setTileFunction:(id)a0;
- (long long)shaderValidation;
- (long long)shaderValidationState;
- (BOOL)supportAddingBinaryFunctions;
- (long long)textureWriteRoundingMode;
- (BOOL)threadgroupSizeMatchesTileSize;
- (id)tileFunction;
- (void)setThreadgroupSizeMatchesTileSize:(BOOL)a0;
- (id)insertLibraries;
- (id)newPipelineScript;
- (id)newSerializedTileDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)profileControl;
- (void)setColorSampleCount:(unsigned long long)a0;
- (void)setInsertLibraries:(id)a0;
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)a0;
- (void)setMaxCallStackDepth:(unsigned long long)a0;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (void)setProfileControl:(id)a0;
- (void)setRasterSampleCount:(unsigned long long)a0;
- (void)setShaderValidation:(long long)a0;
- (void)setShaderValidationState:(long long)a0;
- (void)setSupportAddingBinaryFunctions:(BOOL)a0;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (id)tileBuffers;
- (void)validateWithDevice:(id)a0;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;

@end
