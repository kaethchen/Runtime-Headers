@class NSColor, NSFont;

@interface PXCMMInvitationSpec : NSObject

@property (readonly, nonatomic) long long layoutVariant;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double insets;
@property (readonly, nonatomic) double verticalPadding;
@property (readonly, nonatomic) double bulletSize;
@property (readonly, nonatomic) double titleSpacing;
@property (readonly, nonatomic) double subtitleSpacing;
@property (readonly, nonatomic) NSFont *posterTitleFont;
@property (readonly, nonatomic) NSFont *titleFont;
@property (readonly, nonatomic) NSFont *titleEmphasizedFont;
@property (readonly, nonatomic) NSFont *subtitle1Font;
@property (readonly, nonatomic) NSFont *subtitle2Font;
@property (readonly, nonatomic) NSColor *posterTitleColor;
@property (readonly, nonatomic) NSColor *titleColor;
@property (readonly, nonatomic) NSColor *titleBulletColor;
@property (readonly, nonatomic) NSColor *subtitle1Color;
@property (readonly, nonatomic) NSColor *subtitle2Color;

+ (id)specForLayoutVariant:(long long)a0;

- (id)init;
- (id)_initWithLayoutVariant:(long long)a0;

@end
