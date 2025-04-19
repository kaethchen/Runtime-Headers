@class MRTextRenderer, MRImage;

@interface MREffectCalendar : MREffect {
    MRTextRenderer *mTextRenderer;
    MRImage *mTextImage;
    struct CGSize { double width; double height; } mStride;
    struct CGSize { double width; double height; } mImageSize;
    struct CGSize { double width; double height; } mTextSize;
    struct CGPoint { double x; double y; } mBaseImagePosition;
    struct CGPoint { double x; double y; } mBaseTextPosition;
    unsigned char mFirstDayWeekday;
    unsigned char mNumberOfDays;
    BOOL mTextWasUpdatedSinceLastRendering;
}

- (id)init;
- (void)setAttributes:(id)a0;
- (void)_unload;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
