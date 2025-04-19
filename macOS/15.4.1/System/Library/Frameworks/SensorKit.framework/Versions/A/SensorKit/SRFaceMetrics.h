@class NSString, NSMutableArray, NSArray;

@interface SRFaceMetrics : NSObject <SRSampleExporting, SRSampling, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) NSMutableArray *mutableWholeFaceExpressions;
@property (retain, nonatomic) NSMutableArray *mutablePartialFaceExpressions;
@property (readonly, copy, nonatomic) NSArray *wholeFaceExpressions;
@property (readonly, copy, nonatomic) NSArray *partialFaceExpressions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithVersion:(id)a0 sessionIdentifier:(id)a1 context:(unsigned long long)a2 wholeFaceExpressions:(id)a3 partialFaceExpressions:(id)a4;

@end
