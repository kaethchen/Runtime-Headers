@interface VNOperationPoints : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)loadFromURL:(id)a0 error:(id *)a1;
+ (id)errorForUnimplementedMethod:(SEL)a0;
+ (id)errorForUnknownClassificationIdentifier:(id)a0;
+ (id)operationPointsForMLModel:(id)a0 error:(id *)a1;
+ (id)unspecifiedOperationPoints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)getClassificationMetrics:(id *)a0 forClassificationIdentifier:(id)a1 error:(id *)a2;
- (BOOL)getConfidence:(float *)a0 forClassificationIdentifier:(id)a1 withPrecision:(float)a2 error:(id *)a3;
- (BOOL)getConfidence:(float *)a0 forClassificationIdentifier:(id)a1 withRecall:(float)a2 error:(id *)a3;
- (BOOL)getDefaultConfidence:(float *)a0 forClassificationIdentifier:(id)a1 error:(id *)a2;
- (BOOL)getPrecision:(float *)a0 forClassificationIdentifier:(id)a1 confidence:(float)a2 error:(id *)a3;
- (BOOL)getRecall:(float *)a0 forClassificationIdentifier:(id)a1 confidence:(float)a2 error:(id *)a3;

@end
