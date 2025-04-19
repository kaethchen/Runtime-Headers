@class NSString, NSDictionary, NSURL, BCSEmailMetadataParquetMessage, BCSBusinessEmailItemIdentifier;

@interface BCSBusinessEmailItem : BCSItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BCSBusinessEmailItemIdentifier *identifier;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) BCSEmailMetadataParquetMessage *message;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSDictionary *localizedNames;
@property (readonly, nonatomic) NSString *businessId;
@property (readonly, nonatomic) NSString *companyId;
@property (readonly, nonatomic) NSDictionary *localizedDisplayNames;
@property (readonly, nonatomic) NSURL *logoURL;

+ (id)itemFromStatement:(struct sqlite3_stmt { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)itemIdentifier;
- (long long)type;
- (id)displayName;
- (id)initWithEmailMessage:(id)a0;
- (id)initWithEmail:(id)a0 localizedNames:(id)a1;
- (id)initWithEmail:(id)a0 localizedNames:(id)a1 localizedDisplayNames:(id)a2 businessId:(id)a3 companyId:(id)a4;
- (id)initWithIdentifier:(id)a0 defaultsDictionary:(id)a1;
- (BOOL)matchesItemIdentifying:(id)a0;
- (long long)truncatedHash;
- (void)updateStatementValues:(struct sqlite3_stmt { } *)a0 withItemIdentifier:(id)a1;

@end
