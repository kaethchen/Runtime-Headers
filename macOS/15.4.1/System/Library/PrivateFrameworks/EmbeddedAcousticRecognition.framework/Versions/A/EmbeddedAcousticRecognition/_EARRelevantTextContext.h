@class NSString;

@interface _EARRelevantTextContext : NSObject {
    NSString *_leftContext;
    NSString *_rightContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contextUpdateLock;
}

@property BOOL disambiguationActive;
@property BOOL cursorInVisibleText;
@property BOOL favorCommandSuppression;
@property BOOL abortCommandSuppression;
@property BOOL undoEvent;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setLeftContext:(id)a0;
- (void)appendToLeftContext:(id)a0;
- (void)getLeftAndRightContextWithCompletion:(id /* block */)a0;
- (BOOL)getUndoEventAndReset;
- (void)notifyUndoEventFromClient;
- (void)setLeftContext:(id)a0 rightContext:(id)a1;
- (void)setRightContext:(id)a0;

@end
