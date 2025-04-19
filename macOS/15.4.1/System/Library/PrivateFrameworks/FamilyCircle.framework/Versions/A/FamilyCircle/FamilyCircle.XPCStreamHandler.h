@interface FamilyCircle.XPCStreamHandler : NSObject <FamilyCircle.XPCStreamHandling>

- (id)init;
- (void)setEventHandlerForStream:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
