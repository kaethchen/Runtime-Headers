@class NSArray, UXViewController, NSMutableArray;

@interface _UXNavigationRequest : NSObject {
    NSMutableArray *_addedViewControllers;
}

@property (readonly, nonatomic) long long operation;
@property (readonly, nonatomic) UXViewController *viewController;
@property (readonly, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) BOOL animated;

+ (id)_requestWithOperation:(long long)a0 viewControllers:(id)a1 animated:(BOOL)a2;
+ (id)popRequestWithViewController:(id)a0 animated:(BOOL)a1;
+ (id)pushRequestWithViewController:(id)a0 animated:(BOOL)a1;
+ (id)setRequestWithViewControllers:(id)a0 animated:(BOOL)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToNavigationRequest:(id)a0;
- (void)setupContainmentIfNeededInParentViewController:(id)a0;
- (void)tearDownContainmentIfNeeded;

@end
