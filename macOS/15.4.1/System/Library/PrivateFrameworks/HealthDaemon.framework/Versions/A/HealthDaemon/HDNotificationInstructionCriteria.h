@class NSString;

@interface HDNotificationInstructionCriteria : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) NSString *criteriaIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)messageDictionary;
- (id)initWithMessageDictionary:(id)a0;
- (id)codableCriteria;
- (id)initWithCodableNotificationInstructionCriteria:(id)a0;
- (long long)isValidWithDatabaseTransaction:(id)a0 error:(id *)a1;

@end
