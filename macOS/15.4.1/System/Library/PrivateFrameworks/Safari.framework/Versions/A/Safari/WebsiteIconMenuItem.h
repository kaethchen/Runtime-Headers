@class NSString;

@interface WebsiteIconMenuItem : NSMenuItem {
    NSString *_URLString;
    id _faviconRequestToken;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setMenu:(id)a0;
- (id)initWithTitle:(id)a0 action:(SEL)a1 keyEquivalent:(id)a2 URLString:(id)a3;
- (void)requestIcon;

@end
