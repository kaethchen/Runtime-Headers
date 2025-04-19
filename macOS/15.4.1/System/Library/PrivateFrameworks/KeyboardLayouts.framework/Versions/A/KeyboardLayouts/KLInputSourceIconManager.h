@class NSCountedSet, NSArray, NSLocale, NSCache;
@protocol KLPrimaryInputSourcePolicy;

@interface KLInputSourceIconManager : NSObject

@property (retain, nonatomic) NSArray *enabledInputSourceIDs;
@property (retain, nonatomic) NSCountedSet *enabledScripts;
@property (retain, nonatomic) NSCountedSet *enabledLanguages;
@property (retain, nonatomic) NSArray *handwritingLanguages;
@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSLocale *primaryLocale;
@property (retain, nonatomic) id<KLPrimaryInputSourcePolicy> primaryInputSourcePolicy;

+ (id)managerWithAllInputSources;

- (id)init;
- (void).cxx_destruct;
- (id)handwritingImageForLanguage:(id)a0;
- (id)imageForInputSource:(id)a0;
- (id)imageForTISInputSource:(struct __TISInputSource { } *)a0;
- (id)initWithEnableInputSources:(id)a0;
- (void)updateLabels;
- (void)drawAttributedString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fontDescriptor:(id)a2 fontSize:(double)a3;
- (id)handwritingTitleImageForLanguage:(id)a0;
- (id)iconStyleFor:(id)a0;
- (id)iconStyleFor:(id)a0 forceToFillBackground:(BOOL)a1;
- (id)imageForIconEntry:(id)a0 style:(id)a1 language:(id)a2 useRoundCorenr:(BOOL)a3;
- (id)imageForInputSource:(id)a0 language:(id)a1 forceToFillBackground:(BOOL)a2 useRoundCorenr:(BOOL)a3;
- (id)indicatorImageForInputSource:(id)a0;
- (id)initWithEnableInputSources:(id)a0 handwritingLanguages:(id)a1 primaryLocale:(id)a2;
- (id)initWithEnableInputSources:(id)a0 primaryLocale:(id)a1;
- (id)labelEntryForInputSource:(id)a0;
- (id)labelForInputSource:(id)a0;
- (id)titleImageForTISInputSource:(struct __TISInputSource { } *)a0;
- (void)updatePrimaryInputSources;

@end
