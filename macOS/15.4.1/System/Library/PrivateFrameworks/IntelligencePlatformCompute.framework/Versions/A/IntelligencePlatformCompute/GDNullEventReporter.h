@interface GDNullEventReporter : NSObject <BMViewEventReporter>

- (id)init;
- (BOOL)streamDeletionWithStreamIdentifier:(id)a0 remoteName:(id)a1 error:(id *)a2;
- (BOOL)streamPrunedWithStreamIdentifier:(id)a0 remoteName:(id)a1 error:(id *)a2;
- (BOOL)streamUpdatedWithStreamIdentifier:(id)a0 remoteName:(id)a1 error:(id *)a2;

@end
