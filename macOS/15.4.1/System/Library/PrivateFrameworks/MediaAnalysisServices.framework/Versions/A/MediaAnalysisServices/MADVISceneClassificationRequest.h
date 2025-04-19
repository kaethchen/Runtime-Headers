@interface MADVISceneClassificationRequest : MADRequest

@property (readonly, nonatomic) unsigned long long maximumLeafObservations;
@property (readonly, nonatomic) unsigned long long maximumHierarchicalObservations;
@property (readonly, nonatomic) unsigned long long classificationRevision;
@property (readonly, nonatomic) unsigned long long nsfwRevision;
@property (readonly, nonatomic) unsigned long long significantEventRevision;
@property (readonly, nonatomic) unsigned long long recognizeObjectsRevision;
@property (readonly, nonatomic) unsigned long long saliencyRevision;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
