@interface PXMenuItem : NSMenuItem {
    id /* block */ _actionHandler;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 action:(SEL)a1 keyEquivalent:(id)a2;
- (void)_menuItemAction:(id)a0;
- (id)initWithTitle:(id)a0 actionHandler:(id /* block */)a1;

@end
