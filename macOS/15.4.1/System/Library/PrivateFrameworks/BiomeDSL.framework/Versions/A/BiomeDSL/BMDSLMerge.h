@class BMDSL;

@interface BMDSLMerge : BMDSL

@property (readonly, nonatomic) BMDSL *a;
@property (readonly, nonatomic) BMDSL *b;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bpsPublisher;
- (id)initWithA:(id)a0 b:(id)a1;
- (id)upstreams;
- (id)initWithA:(id)a0 b:(id)a1 name:(id)a2 version:(unsigned int)a3;

@end
