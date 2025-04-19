@class NSTextField;

@interface SidebarPlaceholderViewController : NSViewController

@property (weak, nonatomic) NSTextField *descriptionLabel;

+ (id)readingListPlaceholderViewController;

- (void).cxx_destruct;
- (void)updateDescriptionIfNecessaryWithString:(id)a0;

@end
