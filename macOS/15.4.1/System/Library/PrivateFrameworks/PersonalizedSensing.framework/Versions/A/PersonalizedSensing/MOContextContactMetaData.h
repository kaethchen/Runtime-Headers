@class NSString;

@interface MOContextContactMetaData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactName;
@property (readonly, copy, nonatomic) NSString *contextContactIdentifier;
@property (readonly, copy, nonatomic) NSString *mdEntityIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContactIdentifier:(id)a0 contactName:(id)a1 mdEntityIdentifier:(id)a2;
- (id)initWithContactName:(id)a0;

@end
