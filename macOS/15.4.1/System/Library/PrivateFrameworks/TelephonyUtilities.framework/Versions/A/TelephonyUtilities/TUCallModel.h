@interface TUCallModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsHolding;
@property (nonatomic) BOOL supportsGrouping;
@property (nonatomic) BOOL supportsUngrouping;
@property (nonatomic) BOOL supportsDTMF;
@property (nonatomic) BOOL supportsUnambiguousMultiPartyState;
@property (nonatomic) BOOL supportsAddCall;
@property (nonatomic) BOOL supportsSendingToVoicemail;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
