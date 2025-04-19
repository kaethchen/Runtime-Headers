@interface SCTCarbonMenuItem : NSObject {
    struct OpaqueMenuRef { } *mMenu;
    unsigned short mItemIndex;
}

- (id)description;
- (struct OpaqueMenuRef { } *)menu;
- (BOOL)isVisible;
- (unsigned short)itemIndex;
- (void)setMenu:(struct OpaqueMenuRef { } *)a0;
- (BOOL)validateItem;
- (id)initWithMenu:(struct OpaqueMenuRef { } *)a0 item:(unsigned short)a1;

@end
