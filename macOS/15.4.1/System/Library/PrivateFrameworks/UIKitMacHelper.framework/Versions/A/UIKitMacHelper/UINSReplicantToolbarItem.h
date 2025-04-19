@class NSToolbarItem;

@interface UINSReplicantToolbarItem : NSToolbarItem {
    NSToolbarItem *_originalItem;
}

@property (readonly, weak) NSToolbarItem *originalItem;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithItemIdentifier:(id)a0 originalItem:(id)a1;
- (void)setOriginalItem:(id)a0;

@end
