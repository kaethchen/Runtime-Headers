@interface VUIModalPresentationConfiguration : NSObject

@property (nonatomic) long long type;
@property (nonatomic) BOOL allowsModalOverModal;
@property (nonatomic, getter=isMenuDismissable) BOOL menuDismissable;
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property (nonatomic, getter=isAnimated) BOOL animated;

+ (id)presentationTypeKeyMap;

- (id)init;
- (id)initWithOptions:(id)a0;

@end
