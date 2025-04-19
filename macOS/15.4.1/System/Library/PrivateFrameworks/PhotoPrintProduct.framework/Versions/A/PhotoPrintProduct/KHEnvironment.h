@class KHFrame, NSMutableDictionary, NSMutableArray;
@protocol KHPDFGeneratorDelegate;

@interface KHEnvironment : NSObject {
    NSMutableDictionary *_strings;
    NSMutableArray *_treatmentLayerRendererCacheStack;
}

@property BOOL renderTreatments;
@property BOOL allowContextTranslation;
@property BOOL renderingToLayers;
@property BOOL isCalendarPreviewEnvironment;
@property BOOL shouldIgnoreDrawingBadges;
@property BOOL shouldIgnoreDrawingTexts;
@property double backingScaleFactor;
@property int currentBlendMode;
@property unsigned long long renderingIntent;
@property (retain) KHFrame *currentFrame;
@property id<KHPDFGeneratorDelegate> progressDelegate;

- (void)dealloc;
- (id)init;
- (id)stringForKey:(id)a0;
- (void)addString:(id)a0 forKey:(id)a1;
- (void)cacheForTreatmentLayer:(id)a0 object:(id)a1;
- (BOOL)canCacheForTreatmentLayers;
- (void)clearStrings;
- (void)popTreatmentLayerRendererCache;
- (void)pushTreatmentLayerRendererCache:(id)a0;
- (void)removeStringForKey:(id)a0;
- (id)retrieveCachedForTreatmentLayer:(id)a0;
- (id)treatmentLayerRendererCache;

@end
