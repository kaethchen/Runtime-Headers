@class NSString, NSArray;

@interface PARSafariSummarizationPrefetchRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *localeString;
@property (copy, nonatomic) NSArray *urlVariants;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)nwActivityLabel;
- (Class)responseClass;

@end
