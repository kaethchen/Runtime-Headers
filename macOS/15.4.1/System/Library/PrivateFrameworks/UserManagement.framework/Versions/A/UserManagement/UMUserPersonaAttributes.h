@class NSString, NSArray, NSURL, NSDate;

@interface UMUserPersonaAttributes : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *personaLayoutPathURL;
@property (copy, nonatomic) NSString *userPersonaUniqueString;
@property (nonatomic) unsigned long long userPersonaType;
@property (nonatomic) unsigned int userPersona_id;
@property (nonatomic) BOOL isEnterprisePersona;
@property (nonatomic) BOOL isPersonalPersona;
@property (nonatomic) BOOL isUniversalPersona;
@property (nonatomic) BOOL isSystemPersona;
@property (nonatomic) BOOL isDefaultPersona;
@property (nonatomic) BOOL isGuestPersona;
@property (nonatomic) BOOL isDataSeparatedPersona;
@property (nonatomic) BOOL isDisabled;
@property (copy, nonatomic) NSString *userPersonaDisplayName;
@property (copy, nonatomic) NSArray *userPersonaBundleIDList;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *lastLoginDate;
@property (copy, nonatomic) NSDate *lastDisableDate;
@property (copy, nonatomic) NSDate *lastEnableDate;

+ (id)personaAttributesForPersonaUniqueString:(id)a0;
+ (id)personaAttributesForPersonaUniqueString:(id)a0 withError:(id *)a1;
+ (id)personaAttributesForPersonaType:(unsigned long long)a0;
+ (id)personaAttributesForIdentifier:(id)a0;
+ (id)currentContextIdentifier;
+ (id)personaAttributes;
+ (id)personaAttributesForPersonaType:(unsigned long long)a0 withError:(id *)a1;
+ (id)setUpPersonaAttributesWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)sandboxExtensionForPersonaLayoutPath;

@end
