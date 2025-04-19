@class NSString;

@interface ASKAlertReply : NSObject {
    NSString *_buttonReturned;
}

+ (id)replyWithButtonReturned:(id)a0;

- (void)dealloc;
- (id)buttonReturned;
- (id)initWithButtonReturned:(id)a0;

@end
