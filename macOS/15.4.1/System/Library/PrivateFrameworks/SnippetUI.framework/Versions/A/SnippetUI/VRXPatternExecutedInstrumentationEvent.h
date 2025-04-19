@class NSString, _TtC9SnippetUI17RFPatternExecuted;

@interface VRXPatternExecutedInstrumentationEvent : VRXTurnBasedInstrumentationEvent

@property (readonly) _TtC9SnippetUI17RFPatternExecuted *patternExecuted;
@property (retain, nonatomic) NSString *patternId;
@property (retain, nonatomic) NSString *patternType;
@property (retain, nonatomic) NSString *responseViewId;
@property (retain, nonatomic) NSString *responseMode;

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)a0;
- (void)emitWithTurnIdentifier:(id)a0 aceViewId:(id)a1;
- (id)initWithPatternId:(id)a0 patternType:(id)a1 responseViewId:(id)a2 responseMode:(id)a3;
- (id)init:(id)a0 patternType:(id)a1 responseMode:(id)a2;

@end
