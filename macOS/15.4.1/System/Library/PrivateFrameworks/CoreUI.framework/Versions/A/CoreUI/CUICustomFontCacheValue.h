@interface CUICustomFontCacheValue : NSObject {
    struct __CTFontDescriptor { } *_fontDescriptor;
}

@property (retain, nonatomic) struct __CTFontDescriptor { } *fontDescriptor;
@property (nonatomic) double baselineAdjustment;

- (void)dealloc;

@end
