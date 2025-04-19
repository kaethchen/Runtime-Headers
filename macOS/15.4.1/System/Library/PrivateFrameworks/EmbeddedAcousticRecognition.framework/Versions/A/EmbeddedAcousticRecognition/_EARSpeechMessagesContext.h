@class NSString, NSArray;

@interface _EARSpeechMessagesContext : NSObject

@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSArray *messages;

- (void).cxx_destruct;
- (id)initWithSender:(id)a0 messages:(id)a1;

@end
