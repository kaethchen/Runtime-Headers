@class NSUUID, HMIFaceRecognition, NSNumber, HMITorsoAnnotation;

@interface HMIVideoAnalyzerEventFace : HMIVideoAnalyzerEvent

@property (readonly) NSNumber *yaw;
@property (readonly) NSNumber *roll;
@property (readonly) HMITorsoAnnotation *torsoAnnotation;
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) HMIFaceRecognition *faceRecognition;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)attributeDescriptions;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 faceRecognition:(id)a2;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 yaw:(id)a2 roll:(id)a3 faceRecognition:(id)a4 torsoAnnotation:(id)a5 userInfo:(id)a6;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 yaw:(id)a2 roll:(id)a3 faceRecognition:(id)a4 userInfo:(id)a5;

@end
