@protocol NSAKLayoutItem;

@interface _NSViewAlignmentLayoutRect : NSLayoutRect

@property (readonly) id<NSAKLayoutItem> hostItem;

+ (id)layoutRectWithLeadingAnchor:(id)a0 topAnchor:(id)a1 trailingAnchor:(id)a2 bottomAnchor:(id)a3;

- (id)_equationDescriptionInParent;
- (id)bottomAnchor;
- (id)centerXAnchor;
- (id)centerYAnchor;
- (id)heightAnchor;
- (id)initWithHostItem:(id)a0;
- (id)leadingAnchor;
- (id)topAnchor;
- (id)trailingAnchor;
- (id)widthAnchor;

@end
