@interface SearchUIBackgroundView : NSView

@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;

- (id)init;

@end
