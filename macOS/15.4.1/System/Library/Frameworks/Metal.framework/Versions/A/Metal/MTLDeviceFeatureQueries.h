@interface MTLDeviceFeatureQueries : NSObject

@property (readonly, nonatomic) BOOL familySupportsBufferlessClientStorageTexture;
@property (readonly, nonatomic) BOOL familySupportsComputeMemoryBarrier;
@property (readonly, nonatomic) BOOL familySupportsRenderMemoryBarrier;
@property (readonly, nonatomic) BOOL familySupportsPartialRenderMemoryBarrier;
@property (readonly, nonatomic) BOOL familySupportsArgumentBuffersTier2;
@property (readonly, nonatomic) BOOL familySupportsReadWriteTextureArgumentsTier2;
@property (readonly, nonatomic) BOOL familySupportsStreamingCodecSignaling;
@property (readonly, nonatomic) BOOL familySupportsProgrammableSamplePositions;
@property (readonly, nonatomic) BOOL familySupportsLargeFramebufferConfigs;
@property (readonly, nonatomic) BOOL familySupportsCustomBorderColor;
@property (readonly, nonatomic) BOOL familySupportsSamplerAddressModeClampToHalfBorder;
@property (readonly, nonatomic) BOOL familySupportsBCTextureCompression;
@property (readonly, nonatomic) BOOL familySupports3DBCTextures;
@property (readonly, nonatomic) BOOL familySupportsRGBA10A2Gamma;
@property (readonly, nonatomic) BOOL familySupportsBGR10A2;
@property (readonly, nonatomic) BOOL familySupportsPrimitiveRestartOverride;
@property (readonly, nonatomic) BOOL familySupportsGlobalVariableRelocation;
@property (readonly, nonatomic) BOOL familySupportsGlobalVariableRelocationRender;
@property (readonly, nonatomic) BOOL familySupportsGlobalVariableRelocationCompute;
@property (readonly, nonatomic) BOOL familySupportsTLS;
@property (readonly, nonatomic) BOOL familySupportsGlobalVariableBindings;
@property (readonly, nonatomic) BOOL familySupportsGlobalVariableBindingInDylibs;
@property (readonly, nonatomic) BOOL familySupports32bpcMSAATextures;
@property (readonly, nonatomic) BOOL familySupports32BitMSAA;
@property (readonly, nonatomic) BOOL familySupports32BitFloatFiltering;
@property (readonly, nonatomic) BOOL familySupportsQueryTextureLOD;
@property (readonly, nonatomic) BOOL familySupportsVertexAmplification;
@property (readonly, nonatomic) BOOL familySupportsSamplerReductionMode;
@property (readonly, nonatomic) BOOL familySupportsPlacementHeaps;
@property (readonly, nonatomic) BOOL familySupportsOpenCLTextureWriteSwizzles;
@property (readonly, nonatomic) BOOL familySupportsPullModelInterpolation;
@property (readonly, nonatomic) BOOL familySupportsInt64;
@property (readonly, nonatomic) BOOL familySupportsFixedLinePointFillDepthGradient;
@property (readonly, nonatomic) BOOL familySupportsLateEvalEvent;
@property (readonly, nonatomic) BOOL familySupportsNonZeroTextureWriteLOD;
@property (readonly, nonatomic) BOOL familySupportsSharedTextureHandles;
@property (readonly, nonatomic) BOOL familySupportsBufferPrefetchStatistics;
@property (readonly, nonatomic) BOOL familySupportsLimitedYUVFormats;
@property (readonly, nonatomic) BOOL familySupportsNonPrivateDepthStencilTextures;
@property (readonly, nonatomic) BOOL familySupportsNonPrivateMSAATextures;
@property (readonly, nonatomic) BOOL familySupportsSharedStorageHeapResources;
@property (readonly, nonatomic) BOOL familySupportsSharedStorageTextures;
@property (readonly, nonatomic) BOOL familySupportsLinearTextureFromSharedBuffer;
@property (readonly, nonatomic) BOOL familySupportsPipelineLibraries;
@property (readonly, nonatomic) BOOL familySupportsFragmentOnlyEncoders;
@property (readonly, nonatomic) BOOL familySupportsBufferWithIOSurface;
@property (readonly, nonatomic) BOOL familySupportsProgrammableBlending;
@property (readonly, nonatomic) BOOL familySupportsRenderToLinearTextures;
@property (readonly, nonatomic) BOOL familySupportsMemorylessRenderTargets;
@property (readonly, nonatomic) BOOL familySupportsFastMathInfNaNPropagation;
@property (readonly, nonatomic) BOOL familySupportsInvariantVertexPosition;
@property (readonly, nonatomic) BOOL familySupportsShaderLODAverage;
@property (readonly, nonatomic) BOOL familySupportsRelaxedTextureViewRequirements;
@property (readonly, nonatomic) BOOL familySupportsSeparateDepthStencil;
@property (readonly, nonatomic) BOOL familySupportsGPUStatistics;
@property (readonly, nonatomic) BOOL familySupportsCompressedTextureViewSPI;
@property (readonly, nonatomic) BOOL familySupportsRenderTargetTextureRotation;
@property (readonly, nonatomic) BOOL familySupportsDynamicControlPointCount;
@property (readonly, nonatomic) BOOL familySupportsIABHashForTools;
@property (readonly, nonatomic) BOOL familySupportsBinaryArchives;
@property (readonly, nonatomic) BOOL familySupportsBinaryLibraries;
@property (readonly, nonatomic) BOOL familySupportsDeadlineProfile;
@property (readonly, nonatomic) BOOL familySupportsFillTexture;
@property (readonly, nonatomic) BOOL familySupportsSetThreadgroupPackingDisabled;
@property (readonly, nonatomic) BOOL familySupportsASTCTextureCompression;
@property (readonly, nonatomic) BOOL familySupportsExtendedYUVFormats;
@property (readonly, nonatomic) BOOL familySupportsPublicXR10Formats;
@property (readonly, nonatomic) BOOL familySupportsSRGBwrites;
@property (readonly, nonatomic) BOOL familySupportsDepthClipMode;
@property (readonly, nonatomic) BOOL familySupportsResourceHeaps;
@property (readonly, nonatomic) BOOL familySupportsArgumentBuffers;
@property (readonly, nonatomic) BOOL familySupportsPacked32TextureBufferWrites;
@property (readonly, nonatomic) BOOL familySupports3DASTCTextures;
@property (readonly, nonatomic) BOOL familySupportsExtendedXR10Formats;
@property (readonly, nonatomic) BOOL familySupportsFragmentBufferWrites;
@property (readonly, nonatomic) BOOL familySupportsCountingOcclusionQuery;
@property (readonly, nonatomic) BOOL familySupportsBaseVertexInstanceDrawing;
@property (readonly, nonatomic) BOOL familySupportsIndirectDrawAndDispatch;
@property (readonly, nonatomic) BOOL familySupportsTessellation;
@property (readonly, nonatomic) BOOL familySupportsReadWriteBufferArguments;
@property (readonly, nonatomic) BOOL familySupportsArrayOfTextures;
@property (readonly, nonatomic) BOOL familySupportsArrayOfSamplers;
@property (readonly, nonatomic) BOOL familySupportsCombinedMSAAStoreAndResolveAction;
@property (readonly, nonatomic) BOOL familySupportsMutableTier1ArgumentBuffers;
@property (readonly, nonatomic) BOOL familySupportsSamplerCompareFunction;
@property (readonly, nonatomic) BOOL familySupportsMSAADepthResolve;
@property (readonly, nonatomic) BOOL familySupportsMSAAStencilResolve;
@property (readonly, nonatomic) BOOL familySupportsMSAADepthResolveFilter;
@property (readonly, nonatomic) BOOL familySupportsGFXIndirectCommandBuffers;
@property (readonly, nonatomic) BOOL familySupportsCMPIndirectCommandBuffers;
@property (readonly, nonatomic) BOOL familySupportsIndirectStageInRegion;
@property (readonly, nonatomic) BOOL familySupportsIndirectTextures;
@property (readonly, nonatomic) BOOL familySupportsNorm16BCubicFiltering;
@property (readonly, nonatomic) BOOL familySupportsTextureOutOfBoundsReads;
@property (readonly, nonatomic) BOOL familySupportsTextureSwizzle;
@property (readonly, nonatomic) BOOL familySupportsAlphaYUVFormats;
@property (readonly, nonatomic) BOOL familySupportsMemoryOrderAtomics;
@property (readonly, nonatomic) BOOL familySupportsQuadGroup;
@property (readonly, nonatomic) BOOL familySupportsRenderTextureWrites;
@property (readonly, nonatomic) BOOL familySupportsImageBlocks;
@property (readonly, nonatomic) BOOL familySupportsTileShaders;
@property (readonly, nonatomic) BOOL familySupportsImageBlockSampleCoverageControl;
@property (readonly, nonatomic) BOOL familySupportsNativeHardwareFP16;
@property (readonly, nonatomic) BOOL familySupportsPostDepthCoverage;
@property (readonly, nonatomic) BOOL familySupportsMipLevelsSmallerThanBlockSize;
@property (readonly, nonatomic) BOOL familySupportsNonUniformThreadgroupSize;
@property (readonly, nonatomic) BOOL familySupportsReadWriteTextureArguments;
@property (readonly, nonatomic) BOOL familySupportsReadWriteTextureCubeArguments;
@property (readonly, nonatomic) BOOL familySupportsTextureCubeArray;
@property (readonly, nonatomic) BOOL familySupportsQuadShufflesAndBroadcast;
@property (readonly, nonatomic) BOOL familySupportsConcurrentComputeDispatch;
@property (readonly, nonatomic) BOOL familySupportsRenderPassWithoutRenderTarget;
@property (readonly, nonatomic) BOOL familySupportsRasterOrderGroups;
@property (readonly, nonatomic) BOOL familySupportsRasterOrderGroupsColorAttachment;
@property (readonly, nonatomic) BOOL familySupportsDynamicAttributeStride;
@property (readonly, nonatomic) BOOL familySupportsLinearTexture2DArray;
@property (readonly, nonatomic) BOOL familySupportsNonSquareTileShaders;
@property (readonly, nonatomic) BOOL familySupportsSeparateVisibilityAndShadingRate;
@property (readonly, nonatomic) BOOL familySupports2DLinearTexArraySPI;
@property (readonly, nonatomic) BOOL familySupportsLayeredRendering;
@property (readonly, nonatomic) BOOL familySupportsViewportAndScissorArray;
@property (readonly, nonatomic) BOOL familySupportsIndirectTessellation;
@property (readonly, nonatomic) BOOL familySupportsMSAAStencilResolveFilter;
@property (readonly, nonatomic) BOOL familySupportsStencilFeedback;
@property (readonly, nonatomic) BOOL familySupportsFP32TessFactors;
@property (readonly, nonatomic) BOOL familySupportsUnalignedVertexFetch;
@property (readonly, nonatomic) BOOL familySupportsExtendedVertexFormats;
@property (readonly, nonatomic) BOOL familySupportsResourceDetachBacking;
@property (readonly, nonatomic) BOOL familySupportsBufferWithAddressRanges;
@property (readonly, nonatomic) BOOL familySupportsHeapWithAddressRanges;
@property (readonly, nonatomic) BOOL familySupportsSIMDGroup;
@property (readonly, nonatomic) BOOL familySupportsShaderMinLODClamp;
@property (readonly, nonatomic) BOOL familySupportsSIMDShufflesAndBroadcast;
@property (readonly, nonatomic) BOOL familySupportsWritableArrayOfTextures;
@property (readonly, nonatomic) BOOL familySupportsVariableRateRasterization;
@property (readonly, nonatomic) BOOL familySupportsYCBCRFormats;
@property (readonly, nonatomic) BOOL familySupportsYCBCRFormatsPQ;
@property (readonly, nonatomic) BOOL familySupportsYCBCRFormats12;
@property (readonly, nonatomic) BOOL familySupportsYCBCRFormatsXR;
@property (readonly, nonatomic) BOOL familySupportsASTCHDRTextureCompression;
@property (readonly, nonatomic) BOOL familySupportsSparseTextures;
@property (readonly, nonatomic) BOOL familySupportsSparseHeaps;
@property (readonly, nonatomic) BOOL familySupportsIndirectWritableTextures;
@property (readonly, nonatomic) BOOL familySupportsFunctionPointers;
@property (readonly, nonatomic) BOOL familySupportsDynamicLibraries;
@property (readonly, nonatomic) BOOL familySupportsStatefulDynamicLibraries;
@property (readonly, nonatomic) BOOL familySupportsRenderDynamicLibraries;
@property (readonly, nonatomic) BOOL familySupportsFunctionPointersFromRender;
@property (readonly, nonatomic) BOOL familySupportsSharedFunctionTables;
@property (readonly, nonatomic) BOOL familySupportsRaytracingFromRender;
@property (readonly, nonatomic) BOOL familySupportsPrimitiveMotionBlur;
@property (readonly, nonatomic) BOOL familySupportsRayTracingExtendedVertexFormats;
@property (readonly, nonatomic) BOOL familySupportsHeapAccelerationStructureAllocation;
@property (readonly, nonatomic) BOOL familySupportsRayTracingPerPrimitiveData;
@property (readonly, nonatomic) BOOL familySupportsRayTracingTraversalMetrics;
@property (readonly, nonatomic) BOOL familySupportsRayTracingBuffersFromTables;
@property (readonly, nonatomic) BOOL familySupportsRayTracingAccelerationStructureCPUDeserialization;
@property (readonly, nonatomic) BOOL familySupportsRayTracingMultiLevelInstancing;
@property (readonly, nonatomic) BOOL familySupportsRayTracingIndirectInstanceAccelerationStructureBuild;
@property (readonly, nonatomic) BOOL familySupportsRayTracingGPUTableUpdateBuffers;
@property (readonly, nonatomic) BOOL familySupportsRayTracingCurves;
@property (readonly, nonatomic) BOOL familySupportsShaderBarycentricCoordinates;
@property (readonly, nonatomic) BOOL familySupportsBlackOrWhiteSamplerBorderColors;
@property (readonly, nonatomic) BOOL familySupportsMirrorClampToEdgeSamplerMode;
@property (readonly, nonatomic) BOOL familySupportsSIMDReduction;
@property (readonly, nonatomic) BOOL familySupportsDepthClipModeClampExtended;
@property (readonly, nonatomic) BOOL familySupportsTexture2DMultisampleArray;
@property (readonly, nonatomic) BOOL familySupportsForceSeamsOnCubemaps;
@property (readonly, nonatomic) BOOL familySupportsFloat16BCubicFiltering;
@property (readonly, nonatomic) BOOL familySupportsFloat16InfNanFiltering;
@property (readonly, nonatomic) BOOL familySupportsRTZRounding;
@property (readonly, nonatomic) BOOL familySupportsAnisoSampleFix;
@property (readonly, nonatomic) BOOL familySupportsYCBCRPackedFormatsPQ;
@property (readonly, nonatomic) BOOL familySupportsYCBCRPackedFormats12;
@property (readonly, nonatomic) BOOL familySupportsYCBCRPackedFormatsXR;
@property (readonly, nonatomic) BOOL familySupportsBufferBoundsChecking;
@property (readonly, nonatomic) BOOL familySupportsForkJoin;
@property (readonly, nonatomic) BOOL familySupportsDevicePartitioning;
@property (readonly, nonatomic) BOOL familySupportsComputeCompressedTextureWrite;
@property (readonly, nonatomic) BOOL familySupportsSIMDGroupMatrix;
@property (readonly, nonatomic) BOOL familySupportsInterchangeTiled;
@property (readonly, nonatomic) BOOL familySupportsQuadReduction;
@property (readonly, nonatomic) BOOL familySupportsVirtualSubstreams;
@property (readonly, nonatomic) BOOL familySupportsSIMDShuffleAndFill;
@property (readonly, nonatomic) BOOL familySupportsBfloat16Format;
@property (readonly, nonatomic) BOOL familySupportsSparseDepthAttachments;
@property (readonly, nonatomic) BOOL familySupportsAtomicUlongVoidMinMax;
@property (readonly, nonatomic) BOOL familySupportsLossyCompression;
@property (readonly, nonatomic) BOOL familySupportsAtomicFloat;
@property (readonly, nonatomic) BOOL familySupportsMeshShaders;
@property (readonly, nonatomic) BOOL familySupportsFunctionPointersFromMesh;
@property (readonly, nonatomic) BOOL familySupportsMeshShadersInICB;
@property (readonly, nonatomic) BOOL familySupportsMeshRenderDynamicLibraries;
@property (readonly, nonatomic) BOOL familySupportsBfloat16Buffers;
@property (readonly, nonatomic) BOOL familySupportsCommandBufferJump;
@property (readonly, nonatomic) BOOL familySupportsColorSpaceConversionMatrixSelection;
@property (readonly, nonatomic) BOOL familySupportsPerPlaneCompression;
@property (readonly, nonatomic) BOOL familySupportsConditionalLoadStore;
@property (readonly, nonatomic) BOOL familySupportsStackOverflowErrorCode;
@property (readonly, nonatomic) BOOL familySupportsRayTracingICBs;
@property (readonly, nonatomic) BOOL familySupportsPerformanceStateAssertion;
@property (readonly, nonatomic) BOOL familySupportsExplicitVisibilityGroups;
@property (readonly, nonatomic) BOOL familySupportsRayTracingMatrixLayout;
@property (readonly, nonatomic) BOOL familySupportsRayTracingDirectIntersectionResultAccess;
@property (readonly, nonatomic) BOOL familySupportsRayTracingPerComponentMotionInterpolation;
@property (readonly, nonatomic) BOOL familySupportsExtendedSamplerLODBiasRange;
@property (readonly, nonatomic) BOOL familySupportsDeviceCoherency;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithDevice:(id)a0;
- (BOOL)supportsBGR10A2;
- (BOOL)supportsInvariantVertexPosition;
- (BOOL)supportsMemorylessRenderTargets;
- (BOOL)supportsStreamingCodecSignaling;
- (BOOL)supportsViewportAndScissorArray;
- (BOOL)supportsBufferWithAddressRanges;
- (BOOL)supportsIndirectDrawAndDispatch;
- (BOOL)supportsLargeFramebufferConfigs;
- (BOOL)supportsTextureOutOfBoundsReads;
- (BOOL)supportsWritableArrayOfTextures;
- (BOOL)supports2DLinearTexArraySPI;
- (BOOL)supports32BitFloatFiltering;
- (BOOL)supports32BitMSAA;
- (BOOL)supports32bpcMSAATextures;
- (BOOL)supports3DASTCTextures;
- (BOOL)supports3DBCTextures;
- (BOOL)supportsASTCHDRTextureCompression;
- (BOOL)supportsASTCTextureCompression;
- (BOOL)supportsAlphaYUVFormats;
- (BOOL)supportsAnisoSampleFix;
- (BOOL)supportsArgumentBuffers;
- (BOOL)supportsArgumentBuffersTier2;
- (BOOL)supportsArrayOfSamplers;
- (BOOL)supportsArrayOfTextures;
- (BOOL)supportsAtomicFloat;
- (BOOL)supportsAtomicUlongVoidMinMax;
- (BOOL)supportsBCTextureCompression;
- (BOOL)supportsBaseVertexInstanceDrawing;
- (BOOL)supportsBfloat16Buffers;
- (BOOL)supportsBfloat16Format;
- (BOOL)supportsBinaryArchives;
- (BOOL)supportsBinaryLibraries;
- (BOOL)supportsBlackOrWhiteSamplerBorderColors;
- (BOOL)supportsBufferBoundsChecking;
- (BOOL)supportsBufferPrefetchStatistics;
- (BOOL)supportsBufferWithIOSurface;
- (BOOL)supportsBufferlessClientStorageTexture;
- (BOOL)supportsCMPIndirectCommandBuffers;
- (BOOL)supportsColorSpaceConversionMatrixSelection;
- (BOOL)supportsCombinedMSAAStoreAndResolveAction;
- (BOOL)supportsCommandBufferJump;
- (BOOL)supportsCompressedTextureViewSPI;
- (BOOL)supportsComputeCompressedTextureWrite;
- (BOOL)supportsComputeMemoryBarrier;
- (BOOL)supportsConcurrentComputeDispatch;
- (BOOL)supportsConditionalLoadStore;
- (BOOL)supportsCountingOcclusionQuery;
- (BOOL)supportsCustomBorderColor;
- (BOOL)supportsDeadlineProfile;
- (BOOL)supportsDepthClipMode;
- (BOOL)supportsDepthClipModeClampExtended;
- (BOOL)supportsDeviceCoherency;
- (BOOL)supportsDevicePartitioning;
- (BOOL)supportsDynamicAttributeStride;
- (BOOL)supportsDynamicControlPointCount;
- (BOOL)supportsDynamicLibraries;
- (BOOL)supportsExplicitVisibilityGroups;
- (BOOL)supportsExtendedSamplerLODBiasRange;
- (BOOL)supportsExtendedVertexFormats;
- (BOOL)supportsExtendedXR10Formats;
- (BOOL)supportsExtendedYUVFormats;
- (BOOL)supportsFP32TessFactors;
- (BOOL)supportsFastMathInfNaNPropagation;
- (BOOL)supportsFillTexture;
- (BOOL)supportsFixedLinePointFillDepthGradient;
- (BOOL)supportsFloat16BCubicFiltering;
- (BOOL)supportsFloat16InfNanFiltering;
- (BOOL)supportsForceSeamsOnCubemaps;
- (BOOL)supportsForkJoin;
- (BOOL)supportsFragmentBufferWrites;
- (BOOL)supportsFragmentOnlyEncoders;
- (BOOL)supportsFunctionPointers;
- (BOOL)supportsFunctionPointersFromMesh;
- (BOOL)supportsFunctionPointersFromRender;
- (BOOL)supportsGFXIndirectCommandBuffers;
- (BOOL)supportsGPUStatistics;
- (BOOL)supportsGlobalVariableBindingInDylibs;
- (BOOL)supportsGlobalVariableBindings;
- (BOOL)supportsGlobalVariableRelocation;
- (BOOL)supportsGlobalVariableRelocationCompute;
- (BOOL)supportsGlobalVariableRelocationRender;
- (BOOL)supportsHeapAccelerationStructureAllocation;
- (BOOL)supportsHeapWithAddressRanges;
- (BOOL)supportsIABHashForTools;
- (BOOL)supportsImageBlockSampleCoverageControl;
- (BOOL)supportsImageBlocks;
- (BOOL)supportsIndirectStageInRegion;
- (BOOL)supportsIndirectTessellation;
- (BOOL)supportsIndirectTextures;
- (BOOL)supportsIndirectWritableTextures;
- (BOOL)supportsInt64;
- (BOOL)supportsInterchangeTiled;
- (BOOL)supportsLateEvalEvent;
- (BOOL)supportsLayeredRendering;
- (BOOL)supportsLimitedYUVFormats;
- (BOOL)supportsLinearTexture2DArray;
- (BOOL)supportsLinearTextureFromSharedBuffer;
- (BOOL)supportsLossyCompression;
- (BOOL)supportsMSAADepthResolve;
- (BOOL)supportsMSAADepthResolveFilter;
- (BOOL)supportsMSAAStencilResolve;
- (BOOL)supportsMSAAStencilResolveFilter;
- (BOOL)supportsMemoryOrderAtomics;
- (BOOL)supportsMeshRenderDynamicLibraries;
- (BOOL)supportsMeshShaders;
- (BOOL)supportsMeshShadersInICB;
- (BOOL)supportsMipLevelsSmallerThanBlockSize;
- (BOOL)supportsMirrorClampToEdgeSamplerMode;
- (BOOL)supportsMutableTier1ArgumentBuffers;
- (BOOL)supportsNativeHardwareFP16;
- (BOOL)supportsNonPrivateDepthStencilTextures;
- (BOOL)supportsNonPrivateMSAATextures;
- (BOOL)supportsNonSquareTileShaders;
- (BOOL)supportsNonUniformThreadgroupSize;
- (BOOL)supportsNonZeroTextureWriteLOD;
- (BOOL)supportsNorm16BCubicFiltering;
- (BOOL)supportsOpenCLTextureWriteSwizzles;
- (BOOL)supportsPacked32TextureBufferWrites;
- (BOOL)supportsPartialRenderMemoryBarrier;
- (BOOL)supportsPerPlaneCompression;
- (BOOL)supportsPerformanceStateAssertion;
- (BOOL)supportsPipelineLibraries;
- (BOOL)supportsPlacementHeaps;
- (BOOL)supportsPostDepthCoverage;
- (BOOL)supportsPrimitiveMotionBlur;
- (BOOL)supportsPrimitiveRestartOverride;
- (BOOL)supportsProgrammableBlending;
- (BOOL)supportsProgrammableSamplePositions;
- (BOOL)supportsPublicXR10Formats;
- (BOOL)supportsPullModelInterpolation;
- (BOOL)supportsQuadGroup;
- (BOOL)supportsQuadReduction;
- (BOOL)supportsQuadShufflesAndBroadcast;
- (BOOL)supportsQueryTextureLOD;
- (BOOL)supportsRGBA10A2Gamma;
- (BOOL)supportsRTZRounding;
- (BOOL)supportsRasterOrderGroups;
- (BOOL)supportsRasterOrderGroupsColorAttachment;
- (BOOL)supportsRayTracingAccelerationStructureCPUDeserialization;
- (BOOL)supportsRayTracingBuffersFromTables;
- (BOOL)supportsRayTracingCurves;
- (BOOL)supportsRayTracingDirectIntersectionResultAccess;
- (BOOL)supportsRayTracingExtendedVertexFormats;
- (BOOL)supportsRayTracingGPUTableUpdateBuffers;
- (BOOL)supportsRayTracingICBs;
- (BOOL)supportsRayTracingIndirectInstanceAccelerationStructureBuild;
- (BOOL)supportsRayTracingMatrixLayout;
- (BOOL)supportsRayTracingMultiLevelInstancing;
- (BOOL)supportsRayTracingPerComponentMotionInterpolation;
- (BOOL)supportsRayTracingPerPrimitiveData;
- (BOOL)supportsRayTracingTraversalMetrics;
- (BOOL)supportsRaytracingFromRender;
- (BOOL)supportsReadWriteBufferArguments;
- (BOOL)supportsReadWriteTextureArguments;
- (BOOL)supportsReadWriteTextureArgumentsTier2;
- (BOOL)supportsReadWriteTextureCubeArguments;
- (BOOL)supportsRelaxedTextureViewRequirements;
- (BOOL)supportsRenderDynamicLibraries;
- (BOOL)supportsRenderMemoryBarrier;
- (BOOL)supportsRenderPassWithoutRenderTarget;
- (BOOL)supportsRenderTargetTextureRotation;
- (BOOL)supportsRenderTextureWrites;
- (BOOL)supportsRenderToLinearTextures;
- (BOOL)supportsResourceDetachBacking;
- (BOOL)supportsResourceHeaps;
- (BOOL)supportsSIMDGroup;
- (BOOL)supportsSIMDGroupMatrix;
- (BOOL)supportsSIMDReduction;
- (BOOL)supportsSIMDShuffleAndFill;
- (BOOL)supportsSIMDShufflesAndBroadcast;
- (BOOL)supportsSRGBwrites;
- (BOOL)supportsSamplerAddressModeClampToHalfBorder;
- (BOOL)supportsSamplerCompareFunction;
- (BOOL)supportsSamplerReductionMode;
- (BOOL)supportsSeparateDepthStencil;
- (BOOL)supportsSeparateVisibilityAndShadingRate;
- (BOOL)supportsSetThreadgroupPackingDisabled;
- (BOOL)supportsShaderBarycentricCoordinates;
- (BOOL)supportsShaderLODAverage;
- (BOOL)supportsShaderMinLODClamp;
- (BOOL)supportsSharedFunctionTables;
- (BOOL)supportsSharedStorageHeapResources;
- (BOOL)supportsSharedStorageTextures;
- (BOOL)supportsSharedTextureHandles;
- (BOOL)supportsSparseDepthAttachments;
- (BOOL)supportsSparseHeaps;
- (BOOL)supportsSparseTextures;
- (BOOL)supportsStackOverflowErrorCode;
- (BOOL)supportsStatefulDynamicLibraries;
- (BOOL)supportsStencilFeedback;
- (BOOL)supportsTLS;
- (BOOL)supportsTessellation;
- (BOOL)supportsTexture2DMultisampleArray;
- (BOOL)supportsTextureCubeArray;
- (BOOL)supportsTextureSwizzle;
- (BOOL)supportsTileShaders;
- (BOOL)supportsUnalignedVertexFetch;
- (BOOL)supportsVariableRateRasterization;
- (BOOL)supportsVertexAmplification;
- (BOOL)supportsVirtualSubstreams;
- (BOOL)supportsYCBCRFormats;
- (BOOL)supportsYCBCRFormats12;
- (BOOL)supportsYCBCRFormatsPQ;
- (BOOL)supportsYCBCRFormatsXR;
- (BOOL)supportsYCBCRPackedFormats12;
- (BOOL)supportsYCBCRPackedFormatsPQ;
- (BOOL)supportsYCBCRPackedFormatsXR;

@end
