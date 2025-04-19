@interface SMLikelyReceiverOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL requireEligibility;
@property (readonly, nonatomic) BOOL requireContact;
@property (readonly, nonatomic) BOOL requireNonBlockedContact;
@property (readonly, nonatomic) BOOL requireOnlyFavoritedHandles;
@property (readonly, nonatomic) BOOL requireOnlyPastSessionRecipients;

+ (id)defaultOptions;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasNoFilters;
- (id)initWithRequireEligibility:(BOOL)a0 requireContact:(BOOL)a1 requireNonBlockedContact:(BOOL)a2 requireOnlyFavoritedHandles:(BOOL)a3 requireOnlyPastSessionRecipients:(BOOL)a4;

@end
