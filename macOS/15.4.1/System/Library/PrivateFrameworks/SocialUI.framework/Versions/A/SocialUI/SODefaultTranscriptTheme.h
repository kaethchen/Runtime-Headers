@class NSString, NSDictionary, NSFont, NSColor;

@interface SODefaultTranscriptTheme : NSObject <SOTranscriptTheme>

@property (readonly, nonatomic) NSFont *balloonTextFont;
@property (readonly, nonatomic) NSDictionary *defaultStatusItemStringAttributes;
@property (readonly, nonatomic) NSDictionary *effectControlItemStringAttributes;
@property (readonly, nonatomic) NSColor *defaultCollectionViewItemBackgroundColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } defaultCollectionViewItemSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (id)balloonTextFontWeightAttributes;
- (id)balloonColorForBalloonDescriptor:(struct IMBalloonDescriptor_t { char x0; char x1; char x2; unsigned long long x3; unsigned long long x4; char x5; char x6; })a0;
- (id)balloonMaskImageForBalloonDescriptor:(struct IMBalloonDescriptor_t { char x0; char x1; char x2; unsigned long long x3; unsigned long long x4; char x5; char x6; })a0 userInterfaceLayoutDirection:(long long)a1 outCenterRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)balloonTextColorForBalloonDescriptor:(struct IMBalloonDescriptor_t { char x0; char x1; char x2; unsigned long long x3; unsigned long long x4; char x5; char x6; })a0;
- (id)gradientBalloonColorsForBalloonDescriptor:(struct IMBalloonDescriptor_t { char x0; char x1; char x2; unsigned long long x3; unsigned long long x4; char x5; char x6; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetsForBalloonWithBalloonDescriptor:(struct IMBalloonDescriptor_t { char x0; char x1; char x2; unsigned long long x3; unsigned long long x4; char x5; char x6; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetsForTextBalloonWithBalloonDescriptor:(struct IMBalloonDescriptor_t { char x0; char x1; char x2; unsigned long long x3; unsigned long long x4; char x5; char x6; })a0;
- (id)stringForMessageStatusType:(long long)a0 statusDate:(id)a1 attributionType:(long long)a2;

@end
