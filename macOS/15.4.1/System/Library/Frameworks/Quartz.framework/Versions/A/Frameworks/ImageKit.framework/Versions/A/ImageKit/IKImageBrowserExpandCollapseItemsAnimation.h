@interface IKImageBrowserExpandCollapseItemsAnimation : IKImageBrowserReorderAnimation {
    BOOL _expandMode;
    id _group;
}

- (void)dealloc;
- (void)setGroup:(id)a0;
- (id)group;
- (BOOL)animationManager:(id)a0 processCell:(id)a1 channel:(id)a2;
- (BOOL)expandMode;
- (void)setExpandMode:(BOOL)a0;

@end
