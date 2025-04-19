@class NSString, NSDictionary, NSMutableDictionary, NSAffineTransform;

@interface NSFontDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_attributes;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *postscriptName;
@property (readonly) double pointSize;
@property (readonly, copy) NSAffineTransform *matrix;
@property (readonly) unsigned int symbolicTraits;
@property (readonly) BOOL requiresFontAssetRequest;
@property (readonly, copy) NSDictionary *fontAttributes;

+ (id)fontDescriptorWithFontAttributes:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;
+ (id)_createMungledDictionary:(id)a0;
+ (id)fontDescriptorWithFontAttributes:(id)a0 options:(unsigned long long)a1;
+ (id)fontDescriptorWithName:(id)a0 matrix:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)fontDescriptorByAddingAttributes:(id)a0;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)a0;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)a0 mask:(unsigned int)a1;
- (id)initWithFontAttributes:(id)a0;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_matrix;
- (id)_NSAffineTransform;
- (id)_attributes;
- (id)_fontDescriptorWithMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)_initWithFontAttributes:(id)a0 options:(unsigned long long)a1;
- (id)_visibleName;
- (id)fontDescriptorWithDesign:(id)a0;
- (id)fontDescriptorWithFace:(id)a0;
- (id)fontDescriptorWithFamily:(id)a0;
- (id)fontDescriptorWithMatrix:(id)a0;
- (id)fontDescriptorWithSize:(double)a0;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)a0;

@end
