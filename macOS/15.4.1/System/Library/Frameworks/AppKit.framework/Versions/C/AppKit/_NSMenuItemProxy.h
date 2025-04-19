@interface _NSMenuItemProxy : NSObject <NSValidatedUserInterfaceItem> {
    long long _tag;
    SEL _action;
}

@property (readonly) SEL action;
@property (readonly) long long tag;

- (id)initWithAction:(SEL)a0;

@end
