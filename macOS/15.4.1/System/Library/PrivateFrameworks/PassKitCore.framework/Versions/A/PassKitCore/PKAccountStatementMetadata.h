@class NSString, NSArray, NSDate;

@interface PKAccountStatementMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned long long accountType;
@property (copy, nonatomic) NSString *statementIdentifier;
@property (copy, nonatomic) NSDate *openingDate;
@property (copy, nonatomic) NSDate *closingDate;
@property (nonatomic) BOOL hasBeenProcessed;
@property (copy, nonatomic) NSDate *lastReportDate;
@property (nonatomic) long long reportCount;
@property (copy, nonatomic) NSArray *items;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithArray:(id)a0 accountIdentifier:(id)a1 statementIdentifier:(id)a2;
- (id)itemsMissingFromDevice;
- (id)reportForMissingItems;

@end
