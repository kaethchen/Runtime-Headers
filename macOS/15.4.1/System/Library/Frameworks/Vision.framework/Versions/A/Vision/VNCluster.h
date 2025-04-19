@class NSArray, NSDictionary;

@interface VNCluster : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *objects;
@property (nonatomic) unsigned long long clusterId;
@property (nonatomic) unsigned long long totalObjectCount;
@property (nonatomic) BOOL shouldUpdateRepresentative;
@property (retain, nonatomic) NSArray *suggestedIdsForRepresentative;
@property (retain, nonatomic) NSDictionary *representativenessById;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
