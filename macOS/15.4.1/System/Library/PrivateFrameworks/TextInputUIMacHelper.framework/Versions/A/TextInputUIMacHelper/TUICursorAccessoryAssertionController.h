@class NSHashTable;
@protocol TUICursorAccessoryAssertionControllerSubject;

@interface TUICursorAccessoryAssertionController : NSObject

@property (retain, nonatomic) NSHashTable *assertions;
@property (weak, nonatomic) id<TUICursorAccessoryAssertionControllerSubject> subject;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)createAssertionWithType:(unsigned long long)a0 accessory:(id)a1;
- (void)updateSubjectWithAssertionState;
- (void)beginTrackingAssertion:(id)a0;
- (void)endTrackingAssertion:(id)a0;

@end
