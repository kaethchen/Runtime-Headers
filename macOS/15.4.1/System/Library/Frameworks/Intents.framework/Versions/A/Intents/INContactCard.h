@class NSString, NSArray, NSPersonNameComponents, NSDateComponents, INImage;

@interface INContactCard : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *contactIdentifier;
@property (readonly, copy) NSPersonNameComponents *nameComponents;
@property (readonly) BOOL isMe;
@property (readonly, copy) INImage *image;
@property (readonly, copy) NSString *organizationName;
@property (readonly, copy) NSString *departmentName;
@property (readonly, copy) NSString *jobTitle;
@property (readonly, copy) NSArray *phoneNumbers;
@property (readonly, copy) NSArray *emailAddresses;
@property (readonly, copy) NSArray *postalAddresses;
@property (readonly, copy) NSArray *urlAddresses;
@property (readonly, copy) NSArray *contactRelations;
@property (readonly, copy) NSArray *instantMessageAddresses;
@property (readonly, copy) NSDateComponents *birthday;
@property (readonly, copy) NSArray *dates;

+ (id)initWithContactIdentifier:(id)a0 nameComponents:(id)a1 isMe:(BOOL)a2 image:(id)a3 organizationName:(id)a4 departmentName:(id)a5 jobTitle:(id)a6 phoneNumbers:(id)a7 emailAddresses:(id)a8 postalAddresses:(id)a9 urlAddresses:(id)a10 contactRelations:(id)a11 instantMessageAddresses:(id)a12 birthday:(id)a13 dates:(id)a14;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContactIdentifier:(id)a0 nameComponents:(id)a1 isMe:(BOOL)a2 image:(id)a3 organizationName:(id)a4 departmentName:(id)a5 jobTitle:(id)a6 phoneNumbers:(id)a7 emailAddresses:(id)a8 postalAddresses:(id)a9 urlAddresses:(id)a10 contactRelations:(id)a11 instantMessageAddresses:(id)a12 birthday:(id)a13 dates:(id)a14;

@end
