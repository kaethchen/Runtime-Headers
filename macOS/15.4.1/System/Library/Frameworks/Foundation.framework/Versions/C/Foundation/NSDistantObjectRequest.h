@class NSConnection, NSInvocation;

@interface NSDistantObjectRequest : NSObject

@property (readonly, retain) NSInvocation *invocation;
@property (readonly, retain) NSConnection *connection;
@property (readonly, retain) id conversation;

- (void)replyWithException:(id)a0;

@end
