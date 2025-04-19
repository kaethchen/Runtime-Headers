@class NSProgressIndicator, NSTextField;

@interface GKLoadingCell : NSCollectionViewItem

@property NSTextField *loading;
@property NSProgressIndicator *activityIndicator;

- (void)awakeFromNib;

@end
