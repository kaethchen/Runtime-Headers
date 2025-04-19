@class NSArray, NSString;

@interface _PHPickerCollectionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *_identifiers;
@property (copy, nonatomic) NSArray *suggestedIdentifiers;
@property (copy, nonatomic) NSArray *assetsToAddIdentifiers;
@property (copy, nonatomic) NSArray *disabledIdentifiers;
@property (copy, nonatomic) NSString *purpose;
@property (nonatomic) BOOL allowsEditingCollection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifiers:(id)a0;

@end
