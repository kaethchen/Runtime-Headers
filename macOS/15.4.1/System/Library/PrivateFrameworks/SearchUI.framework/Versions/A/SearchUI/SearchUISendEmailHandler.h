@class SFEmailCommand;

@interface SearchUISendEmailHandler : SearchUIOpenPunchoutHandler

@property (readonly) SFEmailCommand *command;

- (id)defaultSymbolName;
- (id)destinationPunchout;

@end
