@class NSArray;

@interface AXMTextDetectionOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long recognitionLevel;
@property (nonatomic) double normalizedMinimumTextHeightRatio;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (retain, nonatomic) NSArray *textDetectionLocales;
@property (nonatomic) unsigned long long postProcessingOptions;
@property (readonly, nonatomic) BOOL shouldApplySemanticTextFiltering;

+ (id)defaultOptions;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
