@interface VCPFaceUtils : NSObject

+ (id)imageCreationOptions;
+ (id)_firstLocallyAvailableResourceFromResources:(id)a0;
+ (id)_vnFaceAttributeAgeToPHFaceAgeTypeMap;
+ (id)_vnFaceAttributeEthnicityToPHFaceEthnicityType;
+ (id)_vnFaceAttributeEyesToPHEyesStateMap;
+ (id)_vnFaceAttributeFacialHairToPHFaceExpressionType;
+ (id)_vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+ (id)_vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+ (id)_vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+ (id)_vnFaceAttributeHairTypeToPHFaceHairType;
+ (id)_vnFaceAttributeHeadGearToPHFaceHeadGearType;
+ (id)_vnFaceAttributePoseToPHFacePoseType;
+ (id)_vnFaceAttributeSexToPHFaceSexTypeMap;
+ (id)_vnFaceAttributeSkintoneToPHFaceSkintoneType;
+ (id)_vnFaceAttributeSmileToPHFaceSmileTypeMap;
+ (id)_vnFaceGazeDirectionToPHFaceGazeType;
+ (void)assignPropertiesOfVCPPhotosFace:(id)a0 toPHFaceChangeRequest:(id)a1;
+ (int)configureVNRequest:(id *)a0 withClass:(Class)a1 andProcessingVersion:(int)a2;
+ (int)configureVNRequest:(id *)a0 withClass:(Class)a1 andVisionRevision:(unsigned long long)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceRectFromNormalizedCenterX:(double)a0 normalizedCenterY:(double)a1 normalizedSize:(double)a2 sourceWidth:(double)a3 sourceHeight:(double)a4;
+ (BOOL)isBestResourceForFaceProcessing:(id)a0 fromResources:(id)a1;
+ (id)mad_PHFaceGazeTypeDescription:(unsigned short)a0;
+ (unsigned short)mad_PHValueFromVNAgeCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNEthnicityCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNExpressionCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNEyesCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNFaceGazeDirection:(long long)a0;
+ (unsigned short)mad_PHValueFromVNFaceHairCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNFaceHairCategoryV2Label:(id)a0;
+ (unsigned short)mad_PHValueFromVNGlassesCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNHairColorCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNHeadgearCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNPoseCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNSexCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNSkintoneCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNSmilingCategoryLabel:(id)a0;
+ (id)mad_VNFaceGazeDirectionDescription:(long long)a0;
+ (id)phFaceFromVCPPhotosFace:(id)a0 withFetchOptions:(id)a1;
+ (id)phFacesFromVCPPhotosFaces:(id)a0 withFetchOptions:(id)a1;
+ (id)preferredResourcesForFaceProcessingWithAsset:(id)a0;
+ (id)resourceForFaceProcessing:(id)a0 allowStreaming:(BOOL)a1;
+ (id)resourceForFaceProcessingWithAsset:(id)a0 allowStreaming:(BOOL)a1;

@end
