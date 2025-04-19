@class NSArray;

@interface _NSExternalDragToolbarItem : NSToolbarItem {
    NSArray *_externalItems;
}

@property (copy, nonatomic) NSArray *externalItems;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithItemIdentifier:(id)a0;

@end
