@class NSImage, NSAttributedString;

@interface PXGenAILocalizedResource : NSObject

@property (copy, nonatomic) NSAttributedString *playgroundTitle;
@property (copy, nonatomic) NSImage *playgroundIcon;
@property (copy, nonatomic) NSAttributedString *cleanUpTitle;
@property (copy, nonatomic) NSImage *cleanUpIcon;

+ (id)playgroundTitle;
+ (id)_genAIAttributes;
+ (id)cleanUpIcon;
+ (id)cleanUpTitle;
+ (id)playgroundIcon;

- (void).cxx_destruct;

@end
