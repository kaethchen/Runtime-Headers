@interface MFMailboxTransformer : NSObject

- (id)init;
- (id)_transformMailbox:(id)a0 parent:(id)a1 legacyMailboxToMailboxMap:(id)a2 objectIDToLegacyMailboxMap:(id)a3;
- (id)transformMailbox:(id)a0 legacyMailboxToMailboxMap:(id)a1 objectIDToLegacyMailboxMap:(id)a2;

@end
