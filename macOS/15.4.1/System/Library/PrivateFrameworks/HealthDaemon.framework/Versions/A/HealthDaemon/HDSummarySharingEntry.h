@class HDCodableSummarySharingEntry, NSString;

@interface HDSummarySharingEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HDCodableSummarySharingEntry *codableEntry;
@property (readonly, copy, nonatomic) NSString *CNContactIdentifier;
@property (readonly, nonatomic) BOOL isPaused;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCodableEntry:(id)a0 CNContactIdentifier:(id)a1 isPaused:(BOOL)a2;
- (id)sharingEntry;

@end
