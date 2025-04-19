@class NSString, INPriceRange;

@interface INRidePartySizeOption : NSObject <INRidePartySizeOptionExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } partySizeRange;
@property (readonly) NSString *sizeDescription;
@property (readonly) INPriceRange *priceRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithPartySizeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 sizeDescription:(id)a1 priceRange:(id)a2;

@end
