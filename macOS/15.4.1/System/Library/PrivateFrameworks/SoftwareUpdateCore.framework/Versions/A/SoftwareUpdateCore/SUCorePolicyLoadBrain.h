@class NSDictionary;

@interface SUCorePolicyLoadBrain : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long specifiedFields;
@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) BOOL discretionary;
@property (nonatomic) BOOL disableUI;
@property (nonatomic) BOOL liveServerCatalogOnly;
@property (nonatomic) BOOL skipPhase;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (void)backToDefaultsWithSkipPhaseSet:(BOOL)a0;
- (id)initWithSkipPhaseSet:(BOOL)a0;

@end
