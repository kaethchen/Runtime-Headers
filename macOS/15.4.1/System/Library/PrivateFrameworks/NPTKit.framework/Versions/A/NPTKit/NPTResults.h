@class NPTPingResult, NPTMetricResult, NSDictionary;

@interface NPTResults : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NPTMetricResult *downloadResults;
@property (retain, nonatomic) NPTMetricResult *uploadResults;
@property (retain, nonatomic) NPTPingResult *pingResults;
@property (retain, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSDictionary *asDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
