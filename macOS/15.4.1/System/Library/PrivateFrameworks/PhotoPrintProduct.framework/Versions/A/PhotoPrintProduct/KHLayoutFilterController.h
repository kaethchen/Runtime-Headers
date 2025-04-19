@class KHProjectLayout, KHFilterControl, NSString;
@protocol KHLayoutFilterDelegate;

@interface KHLayoutFilterController : NSViewController <KHFilterControlDelegate>

@property (retain, nonatomic) KHProjectLayout *layout;
@property (retain, nonatomic) KHFilterControl *filterControl;
@property (nonatomic) id<KHLayoutFilterDelegate> delegate;
@property (nonatomic) unsigned long long selectedLayoutType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)filterControl:(id)a0 didSelectItemAtIndex:(long long)a1;

@end
