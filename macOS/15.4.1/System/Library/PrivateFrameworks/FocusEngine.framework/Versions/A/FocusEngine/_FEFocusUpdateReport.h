@class _FEFocusSystem, _FEFocusUpdateContext;

@interface _FEFocusUpdateReport : NSObject

@property (readonly, weak, nonatomic) _FEFocusSystem *focusSystem;
@property (retain, nonatomic) _FEFocusUpdateContext *context;
@property (readonly, nonatomic) BOOL shouldLog;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFocusSystem:(id)a0;

@end
