@interface IMClassicTapback : IMTapback

@property (readonly, nonatomic) IMClassicTapback *visibleTapbackCounterpart;
@property (readonly, nonatomic) IMClassicTapback *removedTapbackCounterpart;
@property (readonly, nonatomic) IMClassicTapback *counterpart;

+ (id)classicTapbackOptions;
+ (BOOL)isValidAssociatedMessageType:(long long)a0;

- (id)actionStringFormatWithAdaptiveImageGlyphAvailable:(BOOL)a0;
- (id)initWithAssociatedMessageType:(long long)a0;
- (id)reactionStringWithAdaptiveImageGlyph:(id)a0 isCommSafetySensitiveProvider:(id /* block */)a1;

@end
