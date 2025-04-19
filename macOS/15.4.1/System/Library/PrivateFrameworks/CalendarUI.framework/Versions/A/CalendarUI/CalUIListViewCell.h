@class EKEvent, CalUILayerBackedView;

@interface CalUIListViewCell : NSView {
    CalUILayerBackedView *_divider;
}

@property (readonly, nonatomic) EKEvent *event;
@property (readonly, nonatomic) BOOL dragPreview;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL dimmed;
@property (nonatomic) BOOL drawDivider;

+ (BOOL)drawsBackgroundForEvent:(id)a0;

- (void).cxx_destruct;
- (id)initForDragPreview:(BOOL)a0;

@end
