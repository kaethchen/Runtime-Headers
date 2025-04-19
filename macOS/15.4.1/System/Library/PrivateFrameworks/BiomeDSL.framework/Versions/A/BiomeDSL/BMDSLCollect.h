@class BMDSL;

@interface BMDSLCollect : BMDSL

@property (readonly, nonatomic) BMDSL *upstream;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bpsPublisher;
- (id)initWithUpstream:(id)a0;
- (id)upstreams;
- (id)initWithUpstream:(id)a0 name:(id)a1 version:(unsigned int)a2;

@end
