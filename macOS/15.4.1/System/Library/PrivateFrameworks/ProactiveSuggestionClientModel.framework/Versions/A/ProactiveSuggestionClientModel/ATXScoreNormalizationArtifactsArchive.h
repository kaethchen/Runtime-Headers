@class NSDictionary;

@interface ATXScoreNormalizationArtifactsArchive : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *scoreNormalizationModelsDict;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScoreNormalizationModelsDictionary:(id)a0;

@end
