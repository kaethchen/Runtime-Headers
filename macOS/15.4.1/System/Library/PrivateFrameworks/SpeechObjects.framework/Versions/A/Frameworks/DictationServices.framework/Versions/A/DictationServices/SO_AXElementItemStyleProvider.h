@interface SO_AXElementItemStyleProvider : NSObject

@property (copy, nonatomic) id /* block */ itemBackgroundViewCreationHandler;
@property (copy, nonatomic) id /* block */ itemFontCreationHandler;
@property (copy, nonatomic) id /* block */ itemStrokeColorHandler;
@property (copy, nonatomic) id /* block */ itemStrokeWidthHandler;

- (void).cxx_destruct;

@end
