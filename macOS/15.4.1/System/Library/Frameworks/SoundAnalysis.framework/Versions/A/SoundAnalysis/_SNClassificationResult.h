@class NSDictionary, NSString;

@interface _SNClassificationResult : NSObject <SNResult, NSCopying, NSSecureCoding, SNTimeRangeProviding, SNSampling> {
    void /* unknown type, empty encoding */ impl;
    void /* unknown type, empty encoding */ cachedClassifications;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSDictionary *classificationDictionary;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (nonatomic, copy) NSString *classifierIdentifier;
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
- (id)classifications;
- (id)_initPrivate:(id)a0;
- (id)classificationForIdentifier:(id)a0;
- (id)initWithBinarySampleRepresentation:(id)a0;
- (id)initWithClassificationDictionary:(id)a0;

@end
