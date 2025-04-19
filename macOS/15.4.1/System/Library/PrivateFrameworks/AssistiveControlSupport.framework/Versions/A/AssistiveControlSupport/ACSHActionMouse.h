@interface ACSHActionMouse : ACSHAction

@property (nonatomic) unsigned long long mouseAction;
@property (nonatomic) unsigned long long mouseButton;
@property (nonatomic) unsigned long long clickCount;
@property (nonatomic) unsigned long long moveDirectionInDegrees;
@property (nonatomic) struct CGPoint { double x; double y; } startPosition;
@property (nonatomic) double moveSpeed;
@property (nonatomic) BOOL isReverseMove;
@property (nonatomic) BOOL isRepeatMove;
@property (nonatomic) BOOL isBouncingBack;
@property (nonatomic) BOOL modifiedWithControl;
@property (nonatomic) BOOL modifiedWithOption;
@property (nonatomic) BOOL modifiedWithCommand;
@property (nonatomic) BOOL modifiedWithShift;
@property (nonatomic) BOOL autoClick;
@property (nonatomic) unsigned long long scanBoundary;
@property (nonatomic) unsigned long long cycleCount;

+ (void)initialize;
+ (id)_actionMoveWithUndoManager:(id)a0 direction:(unsigned long long)a1 isRepeat:(BOOL)a2 isReverse:(BOOL)a3 speed:(double)a4;
+ (id)actionDoubleClickWithUndoManager:(id)a0 modifiedWithControl:(BOOL)a1 modifiedWithOption:(BOOL)a2 modifiedWithCommand:(BOOL)a3 modifiedWithShift:(BOOL)a4;
+ (id)actionGlideWithUndoManager:(id)a0 autoClick:(BOOL)a1 scanBoundary:(unsigned long long)a2;
+ (id)actionLeftClickWithUndoManager:(id)a0 modifiedWithControl:(BOOL)a1 modifiedWithOption:(BOOL)a2 modifiedWithCommand:(BOOL)a3 modifiedWithShift:(BOOL)a4;
+ (id)actionMoveRepeatWithUndoManager:(id)a0 speed:(double)a1;
+ (id)actionMoveReverseWithUndoManager:(id)a0 speed:(double)a1;
+ (id)actionMoveWithUndoManager:(id)a0 direction:(unsigned long long)a1 speed:(double)a2;
+ (id)actionRightClickWithUndoManager:(id)a0 modifiedWithControl:(BOOL)a1 modifiedWithOption:(BOOL)a2 modifiedWithCommand:(BOOL)a3 modifiedWithShift:(BOOL)a4;
+ (id)actionRotateWithUndoManager:(id)a0 autoClick:(BOOL)a1 scanBoundary:(unsigned long long)a2;
+ (id)actionToggleDragWithUndoManager:(id)a0 modifiedWithControl:(BOOL)a1 modifiedWithOption:(BOOL)a2 modifiedWithCommand:(BOOL)a3 modifiedWithShift:(BOOL)a4;
+ (id)actionTripleClickWithUndoManager:(id)a0 modifiedWithControl:(BOOL)a1 modifiedWithOption:(BOOL)a2 modifiedWithCommand:(BOOL)a3 modifiedWithShift:(BOOL)a4;
+ (id)clickActionWithButton:(unsigned long long)a0 type:(unsigned long long)a1 modifiedWithControl:(BOOL)a2 modifiedWithOption:(BOOL)a3 modifiedWithCommand:(BOOL)a4 modifiedWithShift:(BOOL)a5 undoManager:(id)a6;
+ (unsigned long long)clickCountForMouseAction:(unsigned long long)a0;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)repeatEndedWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (long long)_foundationButton;
- (struct CGSize { double x0; double x1; })_mouseMovementDelta;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;
- (double)repeatFrequencyInSeconds;
- (BOOL)shouldAutoRepeat;
- (BOOL)shouldPerform;

@end
