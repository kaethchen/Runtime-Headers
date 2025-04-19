@class NSString, NSDictionary, _BlastDoorLPImage;

@interface _BlastDoorLPiCloudSharingMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *applicationBundleIdenfier;
@property (copy, nonatomic) NSString *application;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (retain, nonatomic) _BlastDoorLPImage *thumbnail;
@property (retain, nonatomic) NSDictionary *encodedTokens;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (void)setTokenData:(id)a0 handle:(id)a1 url:(id)a2;
- (id)shareURLForHandle:(id)a0;
- (id)tokenDataForHandle:(id)a0;

@end
