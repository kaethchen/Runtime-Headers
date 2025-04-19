@interface CSMSNExceptionManager : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)beginAnnounceMessageException:(id)a0 reason:(id)a1;
- (void)endAnnounceMessageException:(id)a0 reason:(id)a1;

@end
