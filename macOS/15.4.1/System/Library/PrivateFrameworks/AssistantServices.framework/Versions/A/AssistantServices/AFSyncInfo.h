@class NSString, NSSet, SASyncAppMetaData;

@interface AFSyncInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *anchor;
@property (copy, nonatomic) NSString *validity;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) SASyncAppMetaData *appMetadata;
@property (nonatomic) BOOL targetIsLocal;
@property (nonatomic) BOOL forVerification;
@property (copy, nonatomic) NSSet *reasons;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchor:(id)a0 forcingReset:(BOOL)a1;

@end
