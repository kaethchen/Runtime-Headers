@class KHFrame, KHLayout, KHMapMarker;
@protocol KHSelectable;

@interface KHSelection : NSObject

@property (retain, nonatomic) id<KHSelectable> object;
@property (readonly, nonatomic) KHFrame *frame;
@property (readonly, nonatomic) KHLayout *layout;
@property (readonly, nonatomic) KHMapMarker *mapMarker;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double viewScale;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) struct CGPoint { double x; double y; } viewCenter;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } viewTransform;
@property (nonatomic) BOOL viewShowsSimilarPhotosButton;
@property (nonatomic) BOOL viewShowsRelatedPhotosButton;

+ (id)_stringFromKHSelectionType:(unsigned long long)a0;
+ (id)frameSelectionsInSelections:(id)a0;
+ (id)framesInSelections:(id)a0;
+ (id)layoutSelectionsInSelections:(id)a0;
+ (id)layoutsInSelections:(id)a0;
+ (id)selectionWithObject:(id)a0 type:(unsigned long long)a1;

- (id)debugDescription;
- (void).cxx_destruct;

@end
