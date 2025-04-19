@class BMDSL, NSString;
@protocol BMDSLStateValue;

@interface BMDSLState : BMDSL

@property (readonly, nonatomic) BMDSL *upstream;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id<BMDSLStateValue> value;
@property (retain, nonatomic) id<BMDSLStateValue> combinedValue;

+ (id)name;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bpsPublisher;
- (id)upstreams;
- (id)combinedState;
- (id)initWithName:(id)a0 version:(unsigned int)a1 upstream:(id)a2 key:(id)a3 value:(id)a4;
- (id)initWithUpstream:(id)a0 key:(id)a1 value:(id)a2;
- (id)upstreamCombinedState;

@end
