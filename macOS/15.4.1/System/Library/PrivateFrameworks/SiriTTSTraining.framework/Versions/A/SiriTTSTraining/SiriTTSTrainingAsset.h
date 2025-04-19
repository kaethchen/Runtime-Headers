@class NSString, NSNumber, NSDictionary;

@interface SiriTTSTrainingAsset : NSObject <NSSecureCoding, NSCopying>

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long diskSize;
@property (nonatomic, readonly) long long qualityVersion;
@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly) long long contentVersion;
@property (nonatomic, readonly) long long hash;
@property (readonly, retain, nonatomic) NSString *factor;
@property (readonly, retain, nonatomic) NSString *path;
@property (readonly, retain, nonatomic) NSString *language;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSNumber *diskSize;
@property (readonly, retain, nonatomic) NSDictionary *metadata;
@property (readonly, retain, nonatomic) NSNumber *qualityVersion;
@property (readonly, retain, nonatomic) NSNumber *compatibilityVersion;
@property (readonly, retain, nonatomic) NSNumber *contentVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFactor:(id)a0 path:(id)a1 metadata:(id)a2;

@end
