@class NSString;

@interface PARLookupRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSString *queryContext;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) long long lookupSelectionType;
@property (copy, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSString *preferredLanguage;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)nwActivityLabel;
- (Class)responseClass;

@end
