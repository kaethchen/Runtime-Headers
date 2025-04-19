@class NSDictionary;

@interface PKSliceStrokesCommand : PKModifyStrokesCommand

@property (readonly, nonatomic) NSDictionary *substrokes;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDrawingUUID:(id)a0 actionName:(id)a1 substrokes:(id)a2 strokesHidden:(id)a3 hiding:(BOOL)a4;
- (void)applyToDrawing:(id)a0;
- (id)invertedInDrawing:(id)a0;

@end
