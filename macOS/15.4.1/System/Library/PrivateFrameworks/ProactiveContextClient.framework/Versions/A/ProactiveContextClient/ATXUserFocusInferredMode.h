@class BMStream;

@interface ATXUserFocusInferredMode : NSObject {
    BMStream *_stream;
}

+ (id)currentMode;
+ (id)currentModeEvent;
+ (id)currentModeEventAtGivenTime:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)currentMode;
- (id)initWithStream:(id)a0;
- (id)currentModeEvent;
- (id)inferredModeEventWithSuggestionUUID:(id)a0;
- (id)previousModeEvent;
- (id)currentModeEventAtGivenTime:(id)a0;
- (id)lastTwoInferredModeEvents;

@end
