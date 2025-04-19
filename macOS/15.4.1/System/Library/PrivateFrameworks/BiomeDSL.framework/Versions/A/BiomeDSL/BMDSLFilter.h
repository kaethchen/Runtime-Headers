@class NSString, BMDSL;
@protocol NSSecureCoding;

@interface BMDSLFilter : BMDSL

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) BOOL negation;
@property (readonly, nonatomic) long long comparison;
@property (readonly, nonatomic) id<NSSecureCoding> value;
@property (readonly, nonatomic) BMDSL *upstream;

+ (id)new;
+ (id)name;
+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)bpsPublisher;
- (id)upstreams;
- (id)initWithUpstream:(id)a0 keyPath:(id)a1 value:(id)a2;
- (id)initWithUpstream:(id)a0 keyPath:(id)a1 comparison:(long long)a2 negation:(BOOL)a3 value:(id)a4;
- (id)initWithUpstream:(id)a0 keyPath:(id)a1 comparison:(long long)a2 negation:(BOOL)a3 value:(id)a4 name:(id)a5 version:(unsigned int)a6;

@end
