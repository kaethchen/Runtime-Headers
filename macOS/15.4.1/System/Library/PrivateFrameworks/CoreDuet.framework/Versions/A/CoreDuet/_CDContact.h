@class NSString, _CDContactStatistics, NSURL;

@interface _CDContact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifierType;
@property (retain) _CDContactStatistics *statistics;
@property unsigned long long type;
@property (copy) NSString *identifier;
@property (copy) NSString *customIdentifier;
@property (readonly, copy, nonatomic) NSString *handle;
@property (copy) NSString *personId;
@property unsigned long long personIdType;
@property (copy) NSString *displayName;
@property unsigned long long displayType;
@property long long participantStatus;
@property (retain) NSURL *displayImageURL;
@property long long contactIdType;

+ (unsigned long long)typeFromString:(id)a0;
+ (id)_CDValueForContactProperty:(id)a0;
+ (id)_contactPropertiesForContacts:(id)a0 mechanismHints:(id)a1;
+ (id)contactPropertiesForContacts:(id)a0;
+ (id)contactPropertiesForContacts:(id)a0 mechanismHints:(id)a1;
+ (id)contactWithIdentifier:(id)a0 identifierType:(id)a1;
+ (id)contactWithIdentifier:(id)a0 identifierType:(id)a1 displayName:(id)a2 personId:(id)a3 personIdType:(unsigned long long)a4;
+ (id)contactWithIdentifier:(id)a0 identifierType:(id)a1 personId:(id)a2 personIdType:(unsigned long long)a3;
+ (id)contactWithIdentifier:(id)a0 type:(unsigned long long)a1 displayName:(id)a2 personId:(id)a3 personIdType:(unsigned long long)a4;
+ (id)normalizedStringKey:(id)a0;
+ (id)predicateForContact:(id)a0;
+ (id)predicateForContactWithContactIdType:(long long *)a0;
+ (id)predicateForContactWithDisplayName:(id)a0;
+ (id)predicateForContactWithIdentifier:(id)a0;
+ (id)predicateForContactWithPersonId:(id)a0 personIdType:(unsigned long long)a1;
+ (id)predicateForContactWithType:(unsigned long long)a0;
+ (id)typeAsCNContactPropertyKey:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)contactProperty;
- (id)contactPropertyWithMechanismHint:(long long)a0;
- (id)contactPropertyWithOptionalMechanismHint:(long long *)a0;
- (id)initWithContactProperty:(id)a0;
- (id)initWithINPerson:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 customIdentifier:(id)a2 displayName:(id)a3 displayType:(unsigned long long)a4 personId:(id)a5 personIdType:(unsigned long long)a6;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 customIdentifier:(id)a2 displayName:(id)a3 displayType:(unsigned long long)a4 personId:(id)a5 personIdType:(unsigned long long)a6 displayImageURL:(id)a7;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 customIdentifier:(id)a2 displayName:(id)a3 displayType:(unsigned long long)a4 personId:(id)a5 personIdType:(unsigned long long)a6 displayImageURL:(id)a7 participantStatus:(long long)a8;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 customIdentifier:(id)a2 displayName:(id)a3 displayType:(unsigned long long)a4 personId:(id)a5 personIdType:(unsigned long long)a6 displayImageURL:(id)a7 participantStatus:(long long)a8 contactIdType:(long long)a9;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 displayName:(id)a2 personId:(id)a3 personIdType:(unsigned long long)a4;
- (BOOL)mayContainPrefix:(id)a0;
- (BOOL)mayRepresentSamePersonAs:(id)a0;
- (void)mergeWithContact:(id)a0;

@end
