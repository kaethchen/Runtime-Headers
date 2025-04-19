@class NSSet;

@interface NSUserInterfaceCompressionOptions : NSObject <NSSecureCoding, NSCopying, NSCoding> {
    NSSet *_identifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, copy) NSUserInterfaceCompressionOptions *hideImagesOption;
@property (class, readonly, copy) NSUserInterfaceCompressionOptions *hideTextOption;
@property (class, readonly, copy) NSUserInterfaceCompressionOptions *reduceMetricsOption;
@property (class, readonly, copy) NSUserInterfaceCompressionOptions *breakEqualWidthsOption;
@property (class, readonly, copy) NSUserInterfaceCompressionOptions *standardOptions;

@property (readonly, getter=isEmpty) BOOL empty;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)containsOptions:(id)a0;
- (id)identifiers;
- (id)initWithCompressionOptions:(id)a0;
- (id)initWithCompressionOptionsArray:(id)a0;
- (BOOL)intersectsOptions:(id)a0;
- (id)optionsByAddingOptions:(id)a0;
- (id)optionsByRemovingOptions:(id)a0;

@end
