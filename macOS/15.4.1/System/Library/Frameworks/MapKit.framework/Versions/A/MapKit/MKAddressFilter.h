@interface MKAddressFilter : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _includedOptions;
    unsigned long long _excludedOptions;
}

@property (class, readonly, nonatomic) MKAddressFilter *filterIncludingAll;
@property (class, readonly, nonatomic) MKAddressFilter *filterExcludingAll;
@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_commaSeparatedListOfOptions:(unsigned long long)a0;
- (id)_geoAddressFilter;
- (BOOL)excludesOptions:(unsigned long long)a0;
- (BOOL)includesOptions:(unsigned long long)a0;
- (id)initExcludingOptions:(unsigned long long)a0;
- (id)initIncludingOptions:(unsigned long long)a0;
- (BOOL)isEqualToAddressFilter:(id)a0;

@end
