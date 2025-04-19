@interface IATextInputActionsSessionKeyboardDockItemButtonPressAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long buttonPressResult;
@property (nonatomic) unsigned long long buttonType;
@property (nonatomic) long long uiOrientation;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (nonatomic) struct CGPoint { double x; double y; } touchDownPoint;
@property (nonatomic) struct CGPoint { double x; double y; } touchUpPoint;
@property (nonatomic) double touchDuration;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;

@end
