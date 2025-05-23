@class NSUUID, NSString, UTType, NSDate, NSDictionary;

@interface HKAttachment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) UTType *contentType;
@property (readonly) long long size;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSDictionary *metadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 typeIdentifier:(id)a2 size:(long long)a3 creationDate:(id)a4 metadata:(id)a5;

@end
