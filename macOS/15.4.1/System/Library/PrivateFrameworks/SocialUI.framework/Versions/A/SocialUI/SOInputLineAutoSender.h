@class SOInputLine;

@interface SOInputLineAutoSender : NSObject

@property SOInputLine *inputLine;

- (void)_timerFired;
- (id)initWithSOInputLine:(id)a0;

@end
