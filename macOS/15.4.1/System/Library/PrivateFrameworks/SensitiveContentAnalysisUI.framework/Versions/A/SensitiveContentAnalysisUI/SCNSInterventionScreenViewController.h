@class SCNSInterventionPanelController;

@interface SCNSInterventionScreenViewController : OBTemplateContainerViewController

@property (weak, nonatomic) SCNSInterventionPanelController *container;
@property (readonly, nonatomic) long long contentScreen;

+ (id)secondButtonTitleFromModel:(id)a0;

- (void).cxx_destruct;
- (id)bulletListFromModel:(id)a0;
- (id)initWithContainer:(id)a0 contentScreen:(long long)a1;
- (void)setupContainerBody;
- (id)templateViewForScreen:(long long)a0 workflow:(long long)a1 type:(long long)a2;

@end
