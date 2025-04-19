@class NSString;

@interface CSCustomAttributeKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *keyName;
@property (getter=isUnique) BOOL unique;
@property (getter=isSearchable) BOOL searchable;
@property (getter=isSearchableByDefault) BOOL searchableByDefault;
@property (getter=isMultiValued) BOOL multiValued;

+ (BOOL)_keyNameIsValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyName:(id)a0 searchable:(BOOL)a1 searchableByDefault:(BOOL)a2 unique:(BOOL)a3 multiValued:(BOOL)a4;
- (id)initWithKeyName:(id)a0;

@end
