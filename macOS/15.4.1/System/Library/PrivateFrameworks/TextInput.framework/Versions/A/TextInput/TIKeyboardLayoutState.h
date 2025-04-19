@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *inputMode;
@property (readonly, nonatomic) NSString *softwareLayout;
@property (readonly, nonatomic) NSString *hardwareLayout;
@property (nonatomic) BOOL hasCandidateKey;
@property (nonatomic) BOOL hasAccentKey;
@property (nonatomic) BOOL canMultitap;
@property (nonatomic) BOOL isAlphabeticPlane;
@property (nonatomic) BOOL isKanaPlane;
@property (nonatomic) BOOL diacriticForwardCompose;
@property (copy, nonatomic) NSString *layoutTag;
@property (nonatomic) long long userInterfaceIdiom;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
