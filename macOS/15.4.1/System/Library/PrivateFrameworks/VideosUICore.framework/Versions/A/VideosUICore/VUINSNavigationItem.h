@class NSString, NSView, NSArray, VUINSBarButtonItem;
@protocol VUINSNavigationBarVisibilityThresholdProviding;

@interface VUINSNavigationItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSView *titleView;
@property (retain, nonatomic) VUINSBarButtonItem *backBarButtonItem;
@property (copy, nonatomic) NSString *backButtonTitle;
@property (nonatomic) BOOL hidesBackButton;
@property (nonatomic) BOOL useEdgeAppearance;
@property (copy, nonatomic) NSArray *leftBarButtonItems;
@property (copy, nonatomic) NSArray *rightBarButtonItems;
@property (retain, nonatomic) VUINSBarButtonItem *leftBarButtonItem;
@property (retain, nonatomic) VUINSBarButtonItem *rightBarButtonItem;
@property (weak, nonatomic) id<VUINSNavigationBarVisibilityThresholdProviding> visibilityThresholdProvider;
@property (nonatomic) long long largeTitleDisplayMode;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
