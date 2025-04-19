@class NSArray, NSInvocation, NSConnection;

@interface NSConcreteDistantObjectRequest : NSDistantObjectRequest {
    NSInvocation *invocation;
    NSArray *importedObjects;
    id conversation;
    unsigned int sequence;
    NSConnection *connection;
}

- (void)dealloc;
- (id)connection;
- (id)conversation;
- (id)initWithInvocation:(id)a0 conversation:(id)a1 sequence:(unsigned int)a2 importedObjects:(id)a3 connection:(id)a4;
- (id)invocation;
- (void)replyWithException:(id)a0;

@end
