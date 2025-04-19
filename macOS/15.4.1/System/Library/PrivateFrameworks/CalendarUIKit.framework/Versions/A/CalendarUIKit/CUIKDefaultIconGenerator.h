@class NSString;

@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator> {
    BOOL _forceNoTextEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dayNumberStringFromDateComponents:(id)a0 calendar:(id)a1;
+ (void)_drawIconInContext:(struct CGContext { } *)a0 imageSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 dateComponents:(id)a3 calendar:(id)a4;
+ (id)_monthNameFromDateComponents:(id)a0 calendar:(id)a1;

- (struct CGImage { } *)iconImageWithDateComponents:(id)a0 calendar:(id)a1 format:(long long)a2 size:(struct CGSize { double x0; double x1; })a3 scale:(double)a4 appearance:(long long)a5;
- (struct CGImage { } *)iconImageWithDateComponents:(id)a0 calendar:(id)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
- (id)initWithForceNoTextEffects:(BOOL)a0;

@end
