@interface IXUninstallOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL ignoreRemovability;
@property (nonatomic) BOOL ignoreRestrictions;
@property (nonatomic) BOOL ignoreAppProtection;
@property (nonatomic) BOOL requestUserConfirmation;
@property (nonatomic) BOOL waitForDeletion;
@property (nonatomic) BOOL showArchiveOption;
@property (nonatomic) BOOL showDemotionOption;
@property (nonatomic) BOOL systemAppNotAllowed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
