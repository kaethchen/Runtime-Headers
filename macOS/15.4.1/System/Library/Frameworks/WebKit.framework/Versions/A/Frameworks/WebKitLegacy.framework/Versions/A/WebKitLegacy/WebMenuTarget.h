@interface WebMenuTarget : NSObject {
    struct NakedPtr<WebCore::ContextMenuController> { struct ContextMenuController *m_ptr; } _menuController;
}

+ (id)sharedMenuTarget;

- (id).cxx_construct;
- (void)forwardContextMenuAction:(id)a0;
- (struct NakedPtr<WebCore::ContextMenuController> { struct ContextMenuController *x0; })menuController;
- (void)setMenuController:(struct NakedPtr<WebCore::ContextMenuController> { struct ContextMenuController *x0; })a0;

@end
