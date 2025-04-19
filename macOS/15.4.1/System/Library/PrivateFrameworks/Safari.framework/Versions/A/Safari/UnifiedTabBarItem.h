@class NSImage, NSString, NSArray;
@protocol TabBarViewItem;

@interface UnifiedTabBarItem : NSObject

@property (weak, nonatomic) id<TabBarViewItem> owner;
@property (nonatomic) unsigned long long browsingMode;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSImage *placeholderImage;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *activeLabel;
@property (copy, nonatomic) NSString *placeholderLabel;
@property (copy, nonatomic) NSArray *accessoryViews;
@property (copy, nonatomic) NSString *groupIdentifier;

- (void).cxx_destruct;

@end
