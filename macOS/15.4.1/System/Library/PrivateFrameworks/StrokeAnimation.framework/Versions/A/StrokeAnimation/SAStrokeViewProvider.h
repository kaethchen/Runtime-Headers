@class NSView;
@protocol SAStrokeVisualResponse;

@interface SAStrokeViewProvider : NSObject

@property (retain, nonatomic) NSView<SAStrokeVisualResponse> *strokeView;

- (void).cxx_destruct;
- (id)strokeViewWithDelegate:(id)a0;

@end
