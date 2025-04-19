@class NSImage, NSString, NSArray;

@interface AMPContentAdvisoryModel : NSObject

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } largestBadgeSize;

@property (retain, nonatomic) NSImage *primaryBadge;
@property (copy, nonatomic) NSString *primaryBadgeLabel;
@property (copy, nonatomic) NSArray *descriptionList;
@property (copy, nonatomic) NSArray *legendList;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *axDescription;
@property (nonatomic) double duration;

+ (id)modelWithBadge:(id)a0 descriptionList:(id)a1 legendList:(id)a2 axDescription:(id)a3;
+ (id)modelWithBadge:(id)a0 descriptionList:(id)a1 legendList:(id)a2 axDescription:(id)a3 duration:(double)a4;
+ (id)modelWithBadge:(id)a0 descriptionText:(id)a1 axDescription:(id)a2;
+ (id)modelWithBadge:(id)a0 descriptionText:(id)a1 axDescription:(id)a2 duration:(double)a3;

- (void).cxx_destruct;
- (id)initWithBadge:(id)a0 descriptionList:(id)a1 legendList:(id)a2 descriptionText:(id)a3 axDescription:(id)a4 duration:(double)a5;

@end
