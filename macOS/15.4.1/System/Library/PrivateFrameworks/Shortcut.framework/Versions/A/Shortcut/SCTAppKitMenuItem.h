@class NSMenu;

@interface SCTAppKitMenuItem : NSObject {
    NSMenu *_menu;
    long long _itemIndex;
}

@property (readonly) long long itemIndex;
@property (readonly) BOOL isVisible;

- (id)description;
- (void).cxx_destruct;
- (id)menu;
- (void)setMenu:(id)a0;
- (BOOL)validateItem;
- (id)initWithMenu:(id)a0 item:(long long)a1;

@end
