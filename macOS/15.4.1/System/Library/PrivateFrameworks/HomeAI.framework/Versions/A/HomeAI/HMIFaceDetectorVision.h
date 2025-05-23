@class NSString;

@interface HMIFaceDetectorVision : HMFObject <HMIFaceDetector, HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)defaultRevision;
+ (id)logCategory;
+ (void)releaseCachedResources;
+ (id)detectFacesInPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
+ (id)detectFacesInImageData:(id)a0 error:(id *)a1;


@end
