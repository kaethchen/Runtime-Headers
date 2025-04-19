@interface MEFormatReaderInstantiationOptions : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL allowIncrementalFragmentParsing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithAllowIncrementalFragmentParsingOption:(BOOL)a0;
- (id)initWithAllowIncrementalFragmentParsingOptionInternal:(BOOL)a0;

@end
