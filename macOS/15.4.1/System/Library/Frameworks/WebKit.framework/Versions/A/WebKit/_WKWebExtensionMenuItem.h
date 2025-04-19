@interface _WKWebExtensionMenuItem : NSMenuItem

@property (copy, nonatomic) id /* block */ handler;

+ (BOOL)usesUserKeyEquivalents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_performAction:(id)a0;
- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;

@end
