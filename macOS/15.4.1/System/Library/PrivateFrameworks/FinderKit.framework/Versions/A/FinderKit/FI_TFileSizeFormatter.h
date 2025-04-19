@class NSString;

@interface FI_TFileSizeFormatter : NSNumberFormatter {
    unsigned long long _options;
}

@property (retain, nonatomic) NSString *invalidSizeStr;
@property (nonatomic) BOOL stableWidth;
@property (nonatomic) BOOL sizeInBytes;
@property (nonatomic) BOOL specialZeroHandling;

+ (id)fileSizeFormatter;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)numberFromString:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (void)setSizeInBytes:(BOOL)a0;
- (void)initCommon;
- (void)setStableWidth:(BOOL)a0;
- (void)setSpecialZeroHandling:(BOOL)a0;
- (void)setUseKBOnly:(BOOL)a0;

@end
