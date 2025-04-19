@class PGGraph, PHPhotoLibrary, NSObject, PGGraphPetIdentityProcessorCache;
@protocol OS_os_log;

@interface PGGraphPetIdentityProcessor : NSObject

@property (nonatomic) short detectionType;
@property (weak, nonatomic) PGGraph *graph;
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly, nonatomic) PGGraphPetIdentityProcessorCache *cache;

+ (id)fetchInterestingEligiblePetsForWallpaperWithWorkingContext:(id)a0 curationContext:(id)a1;
+ (id)fetchPetPersonsWithDetectionType:(short)a0 photoLibrary:(id)a1;
+ (id)fetchPetPersonsWithNoKeyFaceAndDetectionType:(short)a0 photoLibrary:(id)a1;

- (void).cxx_destruct;
- (id)fetchPetPersons;
- (id)initWithDetectionType:(short)a0 photoLibrary:(id)a1 graph:(id)a2 loggingConnection:(id)a3 cache:(id)a4;

@end
