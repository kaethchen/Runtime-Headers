@class _SNClassificationResult, NSString, NSDictionary, NSArray;

@interface SNClassificationResult : NSObject <NSSecureCoding, SNResult> {
    _SNClassificationResult *_impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *classificationDictionary;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (copy, nonatomic) NSString *classifierIdentifier;
@property (readonly, copy) NSArray *classifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)impl;
- (id)initWithImpl:(id)a0;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)classifications;
- (id)_initPrivate:(id)a0;
- (id)classificationDictionary;
- (id)classificationForIdentifier:(id)a0;
- (id)classifierIdentifier;
- (id)initWithBinarySampleRepresentation:(id)a0;
- (id)initWithClassificationDictionary:(id)a0;
- (void)setClassificationDictionary:(id)a0;
- (void)setClassifierIdentifier:(id)a0;

@end
