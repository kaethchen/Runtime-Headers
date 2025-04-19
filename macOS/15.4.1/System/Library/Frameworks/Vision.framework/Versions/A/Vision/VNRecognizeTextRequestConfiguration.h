@class NSArray;

@interface VNRecognizeTextRequestConfiguration : VNStatefulRequestConfiguration

@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (nonatomic) BOOL automaticallyDetectsLanguage;
@property (nonatomic) float minimumTextHeight;
@property (nonatomic) BOOL keepResourcesLoaded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)a0;

@end
