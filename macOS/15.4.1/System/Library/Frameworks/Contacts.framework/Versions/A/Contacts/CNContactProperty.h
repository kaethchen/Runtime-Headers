@class NSString, CNContact;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {
    NSString *_key;
    NSString *_identifier;
    CNContact *_internalContact;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) CNContact *contact;
@property (readonly, copy) NSString *key;
@property (readonly) id value;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *label;

+ (id)contactPropertyWithContact:(id)a0 propertyKey:(id)a1 identifier:(id)a2;
+ (id)contactPropertyWithContactNoCopy:(id)a0 propertyKey:(id)a1 identifier:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)labeledValue;
- (id)sourceContact;

@end
