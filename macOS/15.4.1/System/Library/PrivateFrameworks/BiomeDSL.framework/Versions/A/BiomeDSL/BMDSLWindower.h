@class NSString, BMDSL, BMDSLWindowAssigner;

@interface BMDSLWindower : BMDSL

@property (readonly, copy, nonatomic) NSString *keyedPath;
@property (readonly, nonatomic) BMDSLWindowAssigner *assigner;
@property (readonly, nonatomic) BMDSL *upstream;

+ (id)name;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bpsPublisher;
- (id)upstreams;
- (id)initWithUpstream:(id)a0 keyedPath:(id)a1 assigner:(id)a2;
- (id)initWithUpstream:(id)a0 keyedPath:(id)a1 assigner:(id)a2 name:(id)a3 version:(unsigned int)a4;

@end
