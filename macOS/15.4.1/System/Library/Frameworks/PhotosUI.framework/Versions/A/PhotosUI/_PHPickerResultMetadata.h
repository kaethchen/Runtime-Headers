@class NSString, NSOrderedSet, NSDictionary;

@interface _PHPickerResultMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long pixelWidth;
@property (nonatomic) unsigned long long pixelHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredCropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } acceptableCropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFaceAreaRect;
@property (nonatomic) BOOL allowsItemProviderOpenInPlace;
@property (copy, nonatomic) NSString *suggestedName;
@property (copy, nonatomic) NSOrderedSet *typeIdentifiers;
@property (copy, nonatomic) NSDictionary *filePromiseURLs;
@property (copy, nonatomic) NSDictionary *sandboxExtensionTokens;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
