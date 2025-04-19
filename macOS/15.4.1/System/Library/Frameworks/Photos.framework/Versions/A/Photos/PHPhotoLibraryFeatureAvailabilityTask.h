@class PHMediaProcessingAlgorithmVersionProvider, NSString, PHPhotoLibrary, NSObject, PHFeatureAvailabilityConfig;
@protocol OS_dispatch_queue;

@interface PHPhotoLibraryFeatureAvailabilityTask : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) PHFeatureAvailabilityConfig *availabilityConfig;
@property (readonly, nonatomic) PHMediaProcessingAlgorithmVersionProvider *versionProvider;
@property (readonly) NSString *taskID;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long feature;

+ (id)availabilityStatusTaskForFeature:(unsigned long long)a0 photoLibrary:(id)a1 availabilityConfig:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(id /* block */)a0;
- (double)_fractionOfAssetsProcessedForPrioritiesByMediaTaskIDs:(id)a0 error:(id *)a1;
- (BOOL)_recordCaptionAndEmbeddingAnalysisToAvailability:(id)a0 error:(id *)a1;
- (BOOL)_recordFaceAndSceneAnalysisToAvailability:(id)a0 error:(id *)a1;
- (BOOL)addAnalysisStateToAvailabilityStatus:(id)a0 error:(id *)a1;
- (BOOL)addGraphAvailabilityToAvailabilityStatus:(id)a0 error:(id *)a1;
- (BOOL)addIndexingStateToAvailabilityStatus:(id)a0 error:(id *)a1;
- (void)computeSearchDonationProgressForTaskID:(unsigned long long)a0 libraryClient:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithFeature:(unsigned long long)a0 photoLibrary:(id)a1 availabilityConfig:(id)a2;

@end
