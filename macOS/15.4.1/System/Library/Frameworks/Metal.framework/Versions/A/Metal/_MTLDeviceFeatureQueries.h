@class NSString;
@protocol MTLDeviceSPI;

@interface _MTLDeviceFeatureQueries : MTLDeviceFeatureQueries {
    struct { NSString *name; long long requirement; BOOL supported; } _featureInfo[207];
    BOOL isAGX;
    id<MTLDeviceSPI> _device;
}

- (id)initWithDevice:(id)a0;
- (void)validate;
- (BOOL)familySupportsCommandBufferJump;
- (BOOL)familySupportsLimitedYUVFormats;
- (BOOL)familySupportsPostDepthCoverage;
- (BOOL)familySupportsRasterOrderGroups;
- (BOOL)familySupportsShaderMinLODClamp;
- (id)nameForFeature:(long long)a0;
- (BOOL)familySupports32bpcMSAATextures;
- (BOOL)familySupportsCustomBorderColor;
- (BOOL)familySupportsPipelineLibraries;
- (BOOL)familySupportsPublicXR10Formats;
- (BOOL)familySupportsRayTracingAccelerationStructureCPUDeserialization;
- (BOOL)familySupportsVirtualSubstreams;
- (BOOL)familySupports2DLinearTexArraySPI;
- (BOOL)familySupports32BitFloatFiltering;
- (BOOL)familySupports32BitMSAA;
- (BOOL)familySupports3DASTCTextures;
- (BOOL)familySupports3DBCTextures;
- (BOOL)familySupportsASTCHDRTextureCompression;
- (BOOL)familySupportsASTCTextureCompression;
- (BOOL)familySupportsAlphaYUVFormats;
- (BOOL)familySupportsAnisoSampleFix;
- (BOOL)familySupportsArgumentBuffers;
- (BOOL)familySupportsArgumentBuffersTier2;
- (BOOL)familySupportsArrayOfSamplers;
- (BOOL)familySupportsArrayOfTextures;
- (BOOL)familySupportsAtomicFloat;
- (BOOL)familySupportsAtomicUlongVoidMinMax;
- (BOOL)familySupportsBCTextureCompression;
- (BOOL)familySupportsBGR10A2;
- (BOOL)familySupportsBaseVertexInstanceDrawing;
- (BOOL)familySupportsBfloat16Buffers;
- (BOOL)familySupportsBfloat16Format;
- (BOOL)familySupportsBinaryArchives;
- (BOOL)familySupportsBinaryLibraries;
- (BOOL)familySupportsBlackOrWhiteSamplerBorderColors;
- (BOOL)familySupportsBufferBoundsChecking;
- (BOOL)familySupportsBufferPrefetchStatistics;
- (BOOL)familySupportsBufferWithAddressRanges;
- (BOOL)familySupportsBufferWithIOSurface;
- (BOOL)familySupportsBufferlessClientStorageTexture;
- (BOOL)familySupportsCMPIndirectCommandBuffers;
- (BOOL)familySupportsColorSpaceConversionMatrixSelection;
- (BOOL)familySupportsCombinedMSAAStoreAndResolveAction;
- (BOOL)familySupportsCompressedTextureViewSPI;
- (BOOL)familySupportsComputeCompressedTextureWrite;
- (BOOL)familySupportsComputeMemoryBarrier;
- (BOOL)familySupportsConcurrentComputeDispatch;
- (BOOL)familySupportsConditionalLoadStore;
- (BOOL)familySupportsCountingOcclusionQuery;
- (BOOL)familySupportsDeadlineProfile;
- (BOOL)familySupportsDepthClipMode;
- (BOOL)familySupportsDepthClipModeClampExtended;
- (BOOL)familySupportsDeviceCoherency;
- (BOOL)familySupportsDevicePartitioning;
- (BOOL)familySupportsDynamicAttributeStride;
- (BOOL)familySupportsDynamicControlPointCount;
- (BOOL)familySupportsDynamicLibraries;
- (BOOL)familySupportsExplicitVisibilityGroups;
- (BOOL)familySupportsExtendedSamplerLODBiasRange;
- (BOOL)familySupportsExtendedVertexFormats;
- (BOOL)familySupportsExtendedXR10Formats;
- (BOOL)familySupportsExtendedYUVFormats;
- (BOOL)familySupportsFP32TessFactors;
- (BOOL)familySupportsFastMathInfNaNPropagation;
- (BOOL)familySupportsFillTexture;
- (BOOL)familySupportsFixedLinePointFillDepthGradient;
- (BOOL)familySupportsFloat16BCubicFiltering;
- (BOOL)familySupportsFloat16InfNanFiltering;
- (BOOL)familySupportsForceSeamsOnCubemaps;
- (BOOL)familySupportsForkJoin;
- (BOOL)familySupportsFragmentBufferWrites;
- (BOOL)familySupportsFragmentOnlyEncoders;
- (BOOL)familySupportsFunctionPointers;
- (BOOL)familySupportsFunctionPointersFromMesh;
- (BOOL)familySupportsFunctionPointersFromRender;
- (BOOL)familySupportsGFXIndirectCommandBuffers;
- (BOOL)familySupportsGPUStatistics;
- (BOOL)familySupportsGlobalVariableBindingInDylibs;
- (BOOL)familySupportsGlobalVariableBindings;
- (BOOL)familySupportsGlobalVariableRelocation;
- (BOOL)familySupportsGlobalVariableRelocationCompute;
- (BOOL)familySupportsGlobalVariableRelocationRender;
- (BOOL)familySupportsHeapAccelerationStructureAllocation;
- (BOOL)familySupportsHeapWithAddressRanges;
- (BOOL)familySupportsIABHashForTools;
- (BOOL)familySupportsImageBlockSampleCoverageControl;
- (BOOL)familySupportsImageBlocks;
- (BOOL)familySupportsIndirectDrawAndDispatch;
- (BOOL)familySupportsIndirectStageInRegion;
- (BOOL)familySupportsIndirectTessellation;
- (BOOL)familySupportsIndirectTextures;
- (BOOL)familySupportsIndirectWritableTextures;
- (BOOL)familySupportsInt64;
- (BOOL)familySupportsInterchangeTiled;
- (BOOL)familySupportsInvariantVertexPosition;
- (BOOL)familySupportsLargeFramebufferConfigs;
- (BOOL)familySupportsLateEvalEvent;
- (BOOL)familySupportsLayeredRendering;
- (BOOL)familySupportsLinearTexture2DArray;
- (BOOL)familySupportsLinearTextureFromSharedBuffer;
- (BOOL)familySupportsLossyCompression;
- (BOOL)familySupportsMSAADepthResolve;
- (BOOL)familySupportsMSAADepthResolveFilter;
- (BOOL)familySupportsMSAAStencilResolve;
- (BOOL)familySupportsMSAAStencilResolveFilter;
- (BOOL)familySupportsMemoryOrderAtomics;
- (BOOL)familySupportsMemorylessRenderTargets;
- (BOOL)familySupportsMeshRenderDynamicLibraries;
- (BOOL)familySupportsMeshShaders;
- (BOOL)familySupportsMeshShadersInICB;
- (BOOL)familySupportsMipLevelsSmallerThanBlockSize;
- (BOOL)familySupportsMirrorClampToEdgeSamplerMode;
- (BOOL)familySupportsMutableTier1ArgumentBuffers;
- (BOOL)familySupportsNativeHardwareFP16;
- (BOOL)familySupportsNonPrivateDepthStencilTextures;
- (BOOL)familySupportsNonPrivateMSAATextures;
- (BOOL)familySupportsNonSquareTileShaders;
- (BOOL)familySupportsNonUniformThreadgroupSize;
- (BOOL)familySupportsNonZeroTextureWriteLOD;
- (BOOL)familySupportsNorm16BCubicFiltering;
- (BOOL)familySupportsOpenCLTextureWriteSwizzles;
- (BOOL)familySupportsPacked32TextureBufferWrites;
- (BOOL)familySupportsPartialRenderMemoryBarrier;
- (BOOL)familySupportsPerPlaneCompression;
- (BOOL)familySupportsPerformanceStateAssertion;
- (BOOL)familySupportsPlacementHeaps;
- (BOOL)familySupportsPrimitiveMotionBlur;
- (BOOL)familySupportsPrimitiveRestartOverride;
- (BOOL)familySupportsProgrammableBlending;
- (BOOL)familySupportsProgrammableSamplePositions;
- (BOOL)familySupportsPullModelInterpolation;
- (BOOL)familySupportsQuadGroup;
- (BOOL)familySupportsQuadReduction;
- (BOOL)familySupportsQuadShufflesAndBroadcast;
- (BOOL)familySupportsQueryTextureLOD;
- (BOOL)familySupportsRGBA10A2Gamma;
- (BOOL)familySupportsRTZRounding;
- (BOOL)familySupportsRasterOrderGroupsColorAttachment;
- (BOOL)familySupportsRayTracingBuffersFromTables;
- (BOOL)familySupportsRayTracingCurves;
- (BOOL)familySupportsRayTracingDirectIntersectionResultAccess;
- (BOOL)familySupportsRayTracingExtendedVertexFormats;
- (BOOL)familySupportsRayTracingGPUTableUpdateBuffers;
- (BOOL)familySupportsRayTracingICBs;
- (BOOL)familySupportsRayTracingIndirectInstanceAccelerationStructureBuild;
- (BOOL)familySupportsRayTracingMatrixLayout;
- (BOOL)familySupportsRayTracingMultiLevelInstancing;
- (BOOL)familySupportsRayTracingPerComponentMotionInterpolation;
- (BOOL)familySupportsRayTracingPerPrimitiveData;
- (BOOL)familySupportsRayTracingTraversalMetrics;
- (BOOL)familySupportsRaytracingFromRender;
- (BOOL)familySupportsReadWriteBufferArguments;
- (BOOL)familySupportsReadWriteTextureArguments;
- (BOOL)familySupportsReadWriteTextureArgumentsTier2;
- (BOOL)familySupportsReadWriteTextureCubeArguments;
- (BOOL)familySupportsRelaxedTextureViewRequirements;
- (BOOL)familySupportsRenderDynamicLibraries;
- (BOOL)familySupportsRenderMemoryBarrier;
- (BOOL)familySupportsRenderPassWithoutRenderTarget;
- (BOOL)familySupportsRenderTargetTextureRotation;
- (BOOL)familySupportsRenderTextureWrites;
- (BOOL)familySupportsRenderToLinearTextures;
- (BOOL)familySupportsResourceDetachBacking;
- (BOOL)familySupportsResourceHeaps;
- (BOOL)familySupportsSIMDGroup;
- (BOOL)familySupportsSIMDGroupMatrix;
- (BOOL)familySupportsSIMDReduction;
- (BOOL)familySupportsSIMDShuffleAndFill;
- (BOOL)familySupportsSIMDShufflesAndBroadcast;
- (BOOL)familySupportsSRGBwrites;
- (BOOL)familySupportsSamplerAddressModeClampToHalfBorder;
- (BOOL)familySupportsSamplerCompareFunction;
- (BOOL)familySupportsSamplerReductionMode;
- (BOOL)familySupportsSeparateDepthStencil;
- (BOOL)familySupportsSeparateVisibilityAndShadingRate;
- (BOOL)familySupportsSetThreadgroupPackingDisabled;
- (BOOL)familySupportsShaderBarycentricCoordinates;
- (BOOL)familySupportsShaderLODAverage;
- (BOOL)familySupportsSharedFunctionTables;
- (BOOL)familySupportsSharedStorageHeapResources;
- (BOOL)familySupportsSharedStorageTextures;
- (BOOL)familySupportsSharedTextureHandles;
- (BOOL)familySupportsSparseDepthAttachments;
- (BOOL)familySupportsSparseHeaps;
- (BOOL)familySupportsSparseTextures;
- (BOOL)familySupportsStackOverflowErrorCode;
- (BOOL)familySupportsStatefulDynamicLibraries;
- (BOOL)familySupportsStencilFeedback;
- (BOOL)familySupportsStreamingCodecSignaling;
- (BOOL)familySupportsTLS;
- (BOOL)familySupportsTessellation;
- (BOOL)familySupportsTexture2DMultisampleArray;
- (BOOL)familySupportsTextureCubeArray;
- (BOOL)familySupportsTextureOutOfBoundsReads;
- (BOOL)familySupportsTextureSwizzle;
- (BOOL)familySupportsTileShaders;
- (BOOL)familySupportsUnalignedVertexFetch;
- (BOOL)familySupportsVariableRateRasterization;
- (BOOL)familySupportsVertexAmplification;
- (BOOL)familySupportsViewportAndScissorArray;
- (BOOL)familySupportsWritableArrayOfTextures;
- (BOOL)familySupportsYCBCRFormats;
- (BOOL)familySupportsYCBCRFormats12;
- (BOOL)familySupportsYCBCRFormatsPQ;
- (BOOL)familySupportsYCBCRFormatsXR;
- (BOOL)familySupportsYCBCRPackedFormats12;
- (BOOL)familySupportsYCBCRPackedFormatsPQ;
- (BOOL)familySupportsYCBCRPackedFormatsXR;
- (long long)requirementForFeature:(long long)a0;
- (BOOL)supportForFeature:(long long)a0;

@end
