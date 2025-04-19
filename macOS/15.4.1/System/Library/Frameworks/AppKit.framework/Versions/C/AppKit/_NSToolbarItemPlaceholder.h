@class NSString, NSToolbar;

@interface _NSToolbarItemPlaceholder : NSObject {
    NSString *_itemIdentifier;
    NSToolbar *_tb;
    long long _visibilityPriority;
    BOOL _hasCustomVisibilityPriority;
}

@property (retain, nonatomic) id propertyListRepresentation;

- (void).cxx_destruct;
- (id)itemIdentifier;
- (id)toolbar;
- (BOOL)_hasCustomVisibilityPriority;
- (void)_setToolbar:(id)a0;
- (id)_toolbar;
- (id)initWithItemIdentifier:(id)a0;
- (BOOL)isTrackingSeparator;
- (void)setVisibilityPriority:(long long)a0;
- (long long)visibilityPriority;

@end
