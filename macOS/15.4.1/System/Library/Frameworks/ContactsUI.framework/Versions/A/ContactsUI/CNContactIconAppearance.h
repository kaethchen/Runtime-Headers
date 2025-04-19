@class NSColor;

@interface CNContactIconAppearance : NSObject

@property (retain) NSColor *foregroundColor;
@property (retain) NSColor *backgroundColor;
@property (retain) NSColor *borderColor;

+ (id)appearanceWithBackgroundStyle:(long long)a0 selected:(BOOL)a1;

- (void).cxx_destruct;

@end
