@class NSArray, NSString;

@interface BMDSLArray : BMDSL

@property (readonly, copy, nonatomic) NSArray *values;
@property (copy, nonatomic) NSString *valueClassName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bpsPublisher;
- (id)upstreams;
- (id)initWithName:(id)a0 version:(unsigned int)a1 values:(id)a2 valueClassName:(id)a3;
- (id)initWithValues:(id)a0 valueClassName:(id)a1;

@end
