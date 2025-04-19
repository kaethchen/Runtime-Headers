@interface FI_TCommandKeyValidatedItem : NSObject <NSValidatedUserInterfaceItem> {
    SEL _action;
    long long _tag;
}

@property (readonly) SEL action;
@property (readonly) long long tag;

- (id)initWithAction:(SEL)a0 andTag:(long long)a1;

@end
