@class NSString;

@interface SRFaceMetricsExpression : NSObject <SRSampling, NSCopying, NSSecureCoding> {
    NSString *_identifier;
    double _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)partialFaceMetricsExpressionWithIdentifier:(id)a0 value:(double)a1;
+ (id)wholeFaceMetricsExpressionWithIdentifier:(id)a0 value:(double)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 value:(double)a1;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;

@end
