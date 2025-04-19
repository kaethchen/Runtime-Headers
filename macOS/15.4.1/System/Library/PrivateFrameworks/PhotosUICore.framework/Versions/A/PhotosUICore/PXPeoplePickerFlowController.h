@class NSArray, UXBarButtonItem, NSString, NSMutableArray, UXViewController;
@protocol PXPeopleFlowViewController, PXPeopleFlowDelegate;

@interface PXPeoplePickerFlowController : NSObject <PXPeopleFlowController>

@property (readonly, copy, nonatomic) NSArray *people;
@property (copy, nonatomic) NSArray *viewControllers;
@property (copy, nonatomic) NSArray *contexts;
@property (retain, nonatomic) NSMutableArray *bootstrappedSourceUUIDs;
@property (nonatomic) long long viewControllerIndex;
@property (nonatomic) double backingScaleFactor;
@property (weak, nonatomic) id<PXPeopleFlowDelegate> flowDelegate;
@property (readonly, nonatomic) BOOL hasNextViewController;
@property (readonly, nonatomic) UXViewController<PXPeopleFlowViewController> *nextViewController;
@property (readonly, nonatomic) BOOL hasPreviousViewController;
@property (readonly, nonatomic) UXViewController<PXPeopleFlowViewController> *previousViewController;
@property (readonly, nonatomic) BOOL wantsCancelButton;
@property (readonly, nonatomic) UXBarButtonItem *leftBarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)done:(id)a0;
- (id)initWithPeople:(id)a0;
- (id)_dataSource;
- (void)_computeViewControllersForPeople:(id)a0;
- (BOOL)_hasMergeCandidatesForDataSource:(id)a0 person:(id)a1;
- (id)initWithPeople:(id)a0 backingScaleFactor:(double)a1;

@end
