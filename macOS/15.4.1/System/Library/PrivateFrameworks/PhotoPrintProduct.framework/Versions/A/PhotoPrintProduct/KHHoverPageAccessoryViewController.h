@class NSString;
@protocol KHAccessoryViewContainerProtocol;

@interface KHHoverPageAccessoryViewController : UXViewController <KHAccessoryViewControllerProtocol>

@property (nonatomic) SEL action;
@property (readonly, nonatomic) unsigned long long preferredAccessoryEdge;
@property (readonly, nonatomic) double collapsedAccessoryLength;
@property (nonatomic) double expandedAccessoryLength;
@property (nonatomic) long long accessoryViewState;
@property (weak, nonatomic) id<KHAccessoryViewContainerProtocol> accessoryViewContainer;
@property (readonly, nonatomic) BOOL isAccessoryFloating;
@property (readonly, nonatomic) double minimumAccessoryLength;
@property (readonly, nonatomic) double maximumAccessoryLength;
@property (readonly, nonatomic) double accessoryAnimationDuration;
@property (readonly, nonatomic) unsigned long long accessoryAnimationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_pageButtonAction:(id)a0;
- (id)initWithAccessoryRectEdge:(unsigned long long)a0;

@end
