@class NSString, NSDictionary, CAFilter;
@protocol MTVisualStyleSetProviding;

@interface MTCoreMaterialVisualStyling : NSObject <MTTinting> {
    id<MTVisualStyleSetProviding> _visualStyleSet;
    NSString *_visualStyleName;
    CAFilter *_composedFilter;
    NSDictionary *_tintColorDescription;
    struct CGColor { } *_tintColor;
    double _tintAlpha;
    NSString *_tintColorName;
    long long _tintColorUIStyle;
    NSString *_compositingFilter;
    NSString *_filterType;
    NSDictionary *_filterProperties;
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) NSString *visualStyleSetName;
@property (readonly, nonatomic) NSString *visualStyleName;
@property (readonly, nonatomic, getter=_composedFilter) CAFilter *composedFilter;
@property (readonly, copy, nonatomic) NSDictionary *tintColorDescription;
@property (readonly, nonatomic) struct CGColor { } *tintColor;
@property (readonly, nonatomic) double tintAlpha;
@property (readonly, copy, nonatomic) NSString *tintColorName;
@property (readonly, nonatomic) long long tintColorUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)userInfo;
- (id)compositingFilter;
- (id)filterType;
- (void)_applyToLayer:(id)a0 withColorBlock:(id /* block */)a1;
- (void)_getCompositingFilter:(id *)a0 tintColor:(struct CGColor **)a1;
- (void)_getFilterType:(id *)a0 vibrantColor:(struct CGColor **)a1 tintColor:(struct CGColor **)a2 inputReversed:(BOOL *)a3;
- (id)_preProcessFilteringDescription:(id)a0;
- (void)_processBlendingDescription:(id)a0;
- (void)_processFilteringDescription:(id)a0;
- (void)_processTintingDescription:(id)a0;
- (void)_processUserInfoDescription:(id)a0;
- (id)filterProperties;
- (id)initWithVisualStyleSet:(id)a0 styleName:(id)a1 description:(id)a2 andDescendantDescriptions:(id)a3;

@end
