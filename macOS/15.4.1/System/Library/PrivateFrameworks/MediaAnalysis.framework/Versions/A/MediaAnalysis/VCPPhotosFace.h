@class NSString, VCPVNImageprintWrapper;

@interface VCPPhotosFace : NSObject <PFPhotosFaceRepresentation>

@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (copy, nonatomic) NSString *personLocalIdentifier;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) short detectionType;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) double bodyCenterX;
@property (nonatomic) double bodyCenterY;
@property (nonatomic) double bodyWidth;
@property (nonatomic) double bodyHeight;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL isInTrash;
@property (nonatomic) BOOL manual;
@property (nonatomic) BOOL isTooSmall;
@property (nonatomic) BOOL hasSmile;
@property (nonatomic) double blurScore;
@property (nonatomic) double exposureScore;
@property (nonatomic) BOOL isLeftEyeClosed;
@property (nonatomic) BOOL isRightEyeClosed;
@property (copy, nonatomic) NSString *adjustmentVersion;
@property (nonatomic) long long nameSource;
@property (nonatomic) int trainingType;
@property (nonatomic) double poseYaw;
@property (nonatomic) unsigned long long algorithmVersion;
@property (nonatomic) long long clusterSequenceNumber;
@property (nonatomic) long long vuObservationID;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic) unsigned short ageType;
@property (nonatomic) unsigned short sexType;
@property (nonatomic) unsigned short eyesState;
@property (nonatomic) unsigned short smileType;
@property (nonatomic) unsigned short facialHairType;
@property (nonatomic) unsigned short hairColorType;
@property (nonatomic) unsigned short glassesType;
@property (nonatomic) unsigned short expressionType;
@property (nonatomic) unsigned short headgearType;
@property (nonatomic) unsigned short hairType;
@property (nonatomic) unsigned short poseType;
@property (nonatomic) unsigned short skintoneType;
@property (nonatomic) unsigned short ethnicityType;
@property (nonatomic) BOOL hasFaceMask;
@property (nonatomic) unsigned short gazeType;
@property (nonatomic) double gazeCenterX;
@property (nonatomic) double gazeCenterY;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gazeRect;
@property (nonatomic) float gazeAngle;
@property (nonatomic) float gazeConfidence;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (retain, nonatomic) VCPVNImageprintWrapper *imageprintWrapper;
@property (nonatomic) double roll;
@property (nonatomic) double quality;

+ (double)_calculateOverlappingBetweenFaceObservation:(id)a0 andBodyObservation:(id)a1;
+ (id)_animalBodiesOnlyFromAnimalBodyObservations:(id)a0 matchedBody:(struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<unsigned long>> { unsigned long long x0; } x2; } x0; })a1 sourceWidth:(unsigned long long)a2 sourceHeight:(unsigned long long)a3 visionRequests:(id)a4 processingVersion:(int)a5;
+ (id)_animalHeadsBodiesFromAnimalHeadObservations:(id)a0 animalBodyObservations:(id)a1 matchedHead:(void *)a2 matchedBody:(void *)a3 sourceWidth:(unsigned long long)a4 sourceHeight:(unsigned long long)a5 visionRequests:(id)a6 processingVersion:(int)a7;
+ (id)_animalHeadsOnlyFromAnimalHeadObservations:(id)a0 matchedHead:(struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<unsigned long>> { unsigned long long x0; } x2; } x0; })a1 sourceWidth:(unsigned long long)a2 sourceHeight:(unsigned long long)a3 visionRequests:(id)a4 processingVersion:(int)a5;
+ (id)_animalImageprintWrapperFromObservation:(id)a0 visionRequests:(id)a1 processingVersion:(int)a2;
+ (double)_calculateIoUBetweenObservation:(id)a0 andObservation:(id)a1;
+ (id)_filterAnimalObservations:(id)a0 colocatingWithFaceObservations:(id)a1 orHumanObservations:(id)a2;
+ (BOOL)_isColocatingAnimalObservation:(id)a0 withFaceObservations:(id)a1 orTorsoObservations:(id)a2;
+ (id)_peopleFacesOnlyFromFaceObservations:(id)a0 matchedFace:(struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<unsigned long>> { unsigned long long x0; } x2; } x0; })a1 sourceWidth:(unsigned long long)a2 sourceHeight:(unsigned long long)a3 visionRequests:(id)a4 blurScorePerFace:(id)a5 exposureScorePerFace:(id)a6 tooSmallFaceObservations:(id)a7 processingVersion:(int)a8;
+ (id)_peopleFacesTorsosFromFaceObservations:(id)a0 humanObservations:(id)a1 matchedFace:(void *)a2 matchedTorso:(void *)a3 sourceWidth:(unsigned long long)a4 sourceHeight:(unsigned long long)a5 visionRequests:(id)a6 blurScorePerFace:(id)a7 exposureScorePerFace:(id)a8 tooSmallFaceObservations:(id)a9 processingVersion:(int)a10;
+ (id)_peopleTorsosOnlyFromHumanObservations:(id)a0 matchedTorso:(struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<unsigned long>> { unsigned long long x0; } x2; } x0; })a1 sourceWidth:(unsigned long long)a2 sourceHeight:(unsigned long long)a3 visionRequests:(id)a4 processingVersion:(int)a5;
+ (id)faceFromAnimalHeadObservation:(id)a0 animalBodyObservation:(id)a1 animalLabel:(id)a2 sourceWidth:(unsigned long long)a3 sourceHeight:(unsigned long long)a4 visionRequests:(id)a5 processingVersion:(int)a6;
+ (id)faceFromFaceObservation:(id)a0 humanObservation:(id)a1 sourceWidth:(unsigned long long)a2 sourceHeight:(unsigned long long)a3 visionRequests:(id)a4 processingVersion:(int)a5 force:(BOOL)a6 andError:(id *)a7;
+ (id)faceFromPHFace:(id)a0 copyOption:(long long)a1;
+ (id)faceWithLocalIdentifier:(id)a0;
+ (id)facesFromFaceObservations:(id)a0 humanObservations:(id)a1 animalHeadObservations:(id)a2 animalBodyObservations:(id)a3 sourceWidth:(unsigned long long)a4 sourceHeight:(unsigned long long)a5 visionRequests:(id)a6 blurScorePerFace:(id)a7 exposureScorePerFace:(id)a8 tooSmallFaceObservations:(id)a9 processingVersion:(int)a10 animalResults:(id *)a11;
+ (id)facesFromFaceObservations:(id)a0 humanObservations:(id)a1 animalObservations:(id)a2 sourceWidth:(unsigned long long)a3 sourceHeight:(unsigned long long)a4 visionRequests:(id)a5 blurScorePerFace:(id)a6 exposureScorePerFace:(id)a7 tooSmallFaceObservations:(id)a8 processingVersion:(int)a9;
+ (id)facesFromPHFetchResult:(id)a0 copyOption:(long long)a1;

- (void).cxx_destruct;
- (id)initWithLocalIdentifier:(id)a0;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationQuality;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationBodyCenterX;
- (double)photosFaceRepresentationBodyCenterY;
- (double)photosFaceRepresentationBodyHeight;
- (double)photosFaceRepresentationBodyWidth;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (BOOL)photosFaceRepresentationHasSmile;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFaceRect;
- (BOOL)setCenterAndSizeFromNormalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)gist;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedBodyRect;
- (long long)qualityMeasureWithCountOfFacesOnAsset:(unsigned long long)a0;
- (void)replaceCoordinatesAndFeaturesFromDetectedFace:(id)a0;

@end
