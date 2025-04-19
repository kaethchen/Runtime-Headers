@class NSString, BCSEmailLogoParquetMessage, NSData, BCSBusinessLogoItemIdentifier, NSURL;

@interface BCSBusinessLogo : BCSItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BCSBusinessLogoItemIdentifier *identifier;
@property (copy, nonatomic) NSString *businessId;
@property (retain, nonatomic) NSData *logo;
@property (copy, nonatomic) NSString *logoFormat;
@property (copy, nonatomic) NSURL *logoURL;
@property (retain, nonatomic) BCSEmailLogoParquetMessage *message;

+ (id)itemFromStatement:(struct sqlite3_stmt { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)itemIdentifier;
- (long long)type;
- (id)initWithBusinessId:(id)a0 logo:(id)a1;
- (id)initWithBusinessId:(id)a0 logoURL:(id)a1 logoFormat:(id)a2;
- (id)initWithMessage:(id)a0 logoURL:(id)a1;
- (BOOL)matchesItemIdentifying:(id)a0;
- (long long)truncatedHash;
- (void)updateStatementValues:(struct sqlite3_stmt { } *)a0 withItemIdentifier:(id)a1;

@end
