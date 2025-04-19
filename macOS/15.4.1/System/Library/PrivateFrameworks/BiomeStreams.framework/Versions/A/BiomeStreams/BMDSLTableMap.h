@class BMDSL, BMTableSchema;
@protocol BMDSLRowTransform;

@interface BMDSLTableMap : BMDSL <BMTableStreamQuery>

@property (retain, nonatomic) id<BMDSLRowTransform> transform;
@property (retain, nonatomic) BMDSL *upstream;
@property (retain, nonatomic) BMTableSchema *schema;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bpsPublisher;
- (id)select:(id)a0;
- (id)initWithUpstream:(id)a0 transform:(id)a1 schema:(id)a2;
- (id)initWithUpstream:(id)a0 transform:(id)a1 schema:(id)a2 name:(id)a3 version:(unsigned int)a4;
- (id)upstreams;

@end
