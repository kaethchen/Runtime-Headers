@class NSArray, NSString, NSView, NSVisualEffectView, NSColor;
@protocol MKModernControlAppearanceView;

@interface MKModernControlAppearanceHelper : NSObject <NSViewLayerContentScaleDelegate, CALayerDelegate> {
    NSView<MKModernControlAppearanceView> *_view;
}

@property (class, readonly, nonatomic) double dimensionLong;
@property (class, readonly, nonatomic) double dimensionShort;
@property (class, readonly, nonatomic) double cornerRadius;

@property (readonly, nonatomic) NSColor *colorActive;
@property (readonly, nonatomic) NSColor *colorDefault;
@property (readonly, nonatomic) NSColor *colorInactive;
@property (readonly, nonatomic) NSColor *colorPressed;
@property (copy, nonatomic) NSArray *layers;
@property (readonly, nonatomic) BOOL isLightMode;
@property (readonly, nonatomic) NSVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)helperFor:(id)a0;

@end
