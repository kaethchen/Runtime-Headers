@class NSString;

@interface _NSActionRecord : NSObject {
    id _target;
    id _sender;
}

@property (readonly) SEL action;
@property (readonly) long long tag;
@property (readonly, copy) NSString *actionTitle;
@property (readonly) BOOL canUseResponderChain;
@property (readonly) BOOL fromMainMenu;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAction:(SEL)a0 target:(id)a1 sender:(id)a2;

@end
