@class NSString, NSImage;

@interface WBSAction : NSObject {
    id /* block */ _handler;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accessibilityIdentifier;

+ (id)actionWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 handler:(id /* block */)a3;
+ (id)toggleSectionExpandedAction;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)performAction;

@end
