@class NSNumber, NSString, NSDictionary;

@interface PLAssetComputeCacheFaceRebuildDescription : NSObject <PLFaceRebuildDescription, PLDetectionAdditionalDescription> {
    NSDictionary *_payloadAttributes;
}

@property (readonly, nonatomic) NSNumber *sourceWidth;
@property (readonly, nonatomic) NSNumber *sourceHeight;
@property (readonly, nonatomic) double centerX;
@property (readonly, nonatomic) double centerY;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isManual) BOOL manual;
@property (readonly, nonatomic, getter=isRepresentative) BOOL representative;
@property (readonly, nonatomic) int nameSource;
@property (readonly, nonatomic) int cloudNameSource;
@property (readonly, nonatomic, getter=isClusterRejected) BOOL clusterRejected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double bodyCenterX;
@property (readonly, nonatomic) double bodyCenterY;
@property (readonly, nonatomic) double bodyWidth;
@property (readonly, nonatomic) double bodyHeight;
@property (readonly, nonatomic) NSNumber *detectionType;
@property (readonly, nonatomic) int faceAlgorithmVersion;

- (void).cxx_destruct;
- (id)additionalDescription;
- (id)initWithPayloadAttributes:(id)a0;

@end
