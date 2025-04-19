@class NSString;

@interface SNSpeechEmotionResult : NSObject <SNResult, NSCopying, NSSecureCoding, SNTimeRangeProviding, SNConfidenceProviding, SNSampling> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (nonatomic) double confidence;
@property (nonatomic) double mood;
@property (nonatomic) double valence;
@property (nonatomic) double arousal;
@property (nonatomic) double dominance;
@property (nonatomic, copy) NSString *modelIdentifier;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithBinarySampleRepresentation:(id)a0;
- (id)initWithMood:(double)a0 valence:(double)a1 arousal:(double)a2 dominance:(double)a3;

@end
