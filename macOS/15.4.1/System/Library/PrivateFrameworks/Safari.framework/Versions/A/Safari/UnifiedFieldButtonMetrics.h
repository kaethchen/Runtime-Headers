@class NSString, NSImage, NSMutableDictionary, NSColor;

@interface UnifiedFieldButtonMetrics : NSObject {
    NSMutableDictionary *_images;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double yOffset;
@property (readonly, nonatomic) NSImage *baseImage;
@property (readonly, nonatomic) NSColor *baseColor;
@property (readonly, nonatomic) NSColor *hoverColor;
@property (readonly, nonatomic) NSColor *activeColor;
@property (readonly, nonatomic) NSColor *activeHoverColor;
@property (readonly, nonatomic) NSString *accessibilityIdentifier;

+ (id)metricsForButton:(long long)a0 browsingMode:(unsigned long long)a1 embeddedInTabBar:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (id)imageForState:(long long)a0;
- (id)colorForState:(long long)a0;
- (id)initForBrowsingMode:(unsigned long long)a0;
- (id)initForButton:(long long)a0 browsingMode:(unsigned long long)a1 embeddedInTabBar:(BOOL)a2;

@end
