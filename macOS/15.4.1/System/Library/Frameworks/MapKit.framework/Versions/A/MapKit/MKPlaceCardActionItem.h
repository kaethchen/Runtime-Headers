@class NSString, MKPlaceActionItemAppearanceProvider, NSColor;

@interface MKPlaceCardActionItem : NSObject {
    MKPlaceActionItemAppearanceProvider *_appearanceProvider;
}

@property (readonly, copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSString *glyph;
@property (retain, nonatomic) NSColor *glyphColor;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) MKPlaceCardActionItem *selectedItem;

+ (id)actionItemWithType:(unsigned long long)a0;
+ (id)actionItemWithType:(unsigned long long)a0 actionDataProvider:(id)a1 enabled:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 appearanceProvider:(id)a1 enabled:(BOOL)a2;
- (id)initWithType:(unsigned long long)a0 displayString:(id)a1 glyph:(id)a2 enabled:(BOOL)a3;
- (BOOL)isDestructiveForDisplayStyle:(unsigned long long)a0;
- (id)resolvedActionItem;
- (id)symbolForDisplayStyle:(unsigned long long)a0;
- (id)titleForDisplayStyle:(unsigned long long)a0;

@end
