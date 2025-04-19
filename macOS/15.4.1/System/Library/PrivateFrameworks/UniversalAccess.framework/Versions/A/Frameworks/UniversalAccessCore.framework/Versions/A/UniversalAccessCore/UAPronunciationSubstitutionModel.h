@class NSUUID, NSString, NSSet, NSAttributedString;

@interface UAPronunciationSubstitutionModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) BOOL active;
@property (copy, nonatomic) NSString *originalString;
@property (copy, nonatomic) NSString *replacementString;
@property (retain, nonatomic) NSAttributedString *ipa;
@property (nonatomic) BOOL ignoreCase;
@property (nonatomic) BOOL appliesToAllApps;
@property (copy, nonatomic) NSSet *bundleIdentifiers;
@property (copy, nonatomic) NSString *language;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 active:(BOOL)a1 originalString:(id)a2 replacementString:(id)a3 ipa:(id)a4 ignoreCase:(BOOL)a5 appliesToAllApps:(BOOL)a6 bundleIdentifiers:(id)a7 language:(id)a8;

@end
