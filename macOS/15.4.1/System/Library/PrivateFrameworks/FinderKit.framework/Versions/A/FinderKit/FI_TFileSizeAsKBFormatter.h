@class FI_TFileSizeFormatter;

@interface FI_TFileSizeAsKBFormatter : FI_TFileSizeFormatter {
    FI_TFileSizeFormatter *_fileSizeFormatterZeroValue;
}

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (void)initCommon;
- (void)setStableWidth:(BOOL)a0;

@end
