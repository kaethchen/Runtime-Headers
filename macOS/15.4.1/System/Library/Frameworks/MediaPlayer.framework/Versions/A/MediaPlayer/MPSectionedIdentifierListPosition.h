@class NSString;

@interface MPSectionedIdentifierListPosition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) long long entryType;

+ (id)positionForHeadOfSection:(id)a0;
+ (id)positionForItem:(id)a0 inSection:(id)a1;
+ (id)positionForTailOfSection:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
