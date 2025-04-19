@interface _PXMenuItem : NSMenuItem {
    id /* block */ _handler;
}

- (void).cxx_destruct;
- (void)_handleAction:(id)a0;
- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;

@end
