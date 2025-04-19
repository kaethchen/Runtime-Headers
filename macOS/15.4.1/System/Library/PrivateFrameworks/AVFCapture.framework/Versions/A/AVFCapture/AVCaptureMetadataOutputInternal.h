@class NSObject, NSArray, AVWeakReference, NSDictionary, AVCaptureDataOutputDelegateCallbackHelper, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_source;

@interface AVCaptureMetadataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *metadataObjectTypes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectOfInterest;
    BOOL faceTrackingMetadataObjectTypesAvailable;
    long long faceTrackingMaxFaces;
    BOOL faceTrackingUsesFaceRecognition;
    BOOL faceTrackingPlusEnabled;
    float faceTrackingNetworkFailureThresholdMultiplier;
    float faceTrackingFailureFieldOfViewModifier;
    BOOL attentionDetectionEnabled;
    BOOL faceOcclusionDetectionEnabled;
    BOOL periocularForFaceIDReadinessEnabled;
    BOOL attentionForFaceIDReadinessRequired;
    NSDictionary *targetFrameRateByMetadataObjectType;
    BOOL videoPreviewHistogramMetadataObjectTypesAvailable;
    BOOL appClipCodeObjectTypeAvailable;
    BOOL textRegionObjectTypeAvailable;
    BOOL sceneClassificationObjectTypeAvailable;
    BOOL headObjectTypesAvailable;
    BOOL humanHandObjectTypeAvailable;
    BOOL emitsEmptyObjectDetectionMetadata;
    BOOL offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
    NSMutableDictionary *previousTwoCMTimesByDetectorType;
    BOOL drawMetadataObjects;
    BOOL synchronizationEnabledByClient;
    BOOL synchronizationEnabled;
    unsigned long long maxSynchronizationFrameDelay;
    NSMutableArray *synchronizedMetadataCollectionsQueue;
    NSObject<OS_dispatch_source> *synchronizationQueueFlushTimer;
}

- (void)dealloc;
- (id)init;

@end
