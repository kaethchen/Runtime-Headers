@class _CDInteractionPolicies, NSXPCConnection;

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording> {
    NSXPCConnection *_connection;
    _CDInteractionPolicies *_policies;
}

@property BOOL enforceDataLimits;
@property BOOL enforcePrivacy;

+ (id)interactionRecorder;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;
- (void)countContactsUsingPredicate:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)countContactsUsingPredicate:(id)a0 error:(id *)a1;
- (void)countContactsUsingPredicate:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)countInteractionsUsingPredicate:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)countInteractionsUsingPredicate:(id)a0 error:(id *)a1;
- (void)countInteractionsUsingPredicate:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deleteInteractionsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)deleteInteractionsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 debuggingReason:(id)a3 completionHandler:(id /* block */)a4;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 debuggingReason:(id)a3 error:(id *)a4;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
- (void)deleteInteractionsMatchingPredicate:(id)a0 synchronous:(BOOL)a1 sortDescriptors:(id)a2 limit:(unsigned long long)a3 debuggingReason:(id)a4 completionHandler:(id /* block */)a5;
- (void)deleteInteractionsWithBundleId:(id)a0 account:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)deleteInteractionsWithBundleId:(id)a0 account:(id)a1 error:(id *)a2;
- (void)deleteInteractionsWithBundleId:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteInteractionsWithBundleId:(id)a0 domainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)deleteInteractionsWithBundleId:(id)a0 domainIdentifier:(id)a1 error:(id *)a2;
- (void)deleteInteractionsWithBundleId:(id)a0 domainIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)deleteInteractionsWithBundleId:(id)a0 domainIdentifiers:(id)a1 error:(id *)a2;
- (unsigned long long)deleteInteractionsWithBundleId:(id)a0 error:(id *)a1;
- (void)deleteInteractionsWithBundleId:(id)a0 synchronous:(BOOL)a1 account:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteInteractionsWithBundleId:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deleteInteractionsWithBundleId:(id)a0 synchronous:(BOOL)a1 domainIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteInteractionsWithBundleId:(id)a0 synchronous:(BOOL)a1 domainIdentifiers:(id)a2 completionHandler:(id /* block */)a3;
- (void)queryContactsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)queryContactsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
- (void)queryContactsUsingPredicate:(id)a0 synchronous:(BOOL)a1 sortDescriptors:(id)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)queryInteractionsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2;
- (void)queryInteractionsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)queryInteractionsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
- (void)queryInteractionsUsingPredicate:(id)a0 synchronous:(BOOL)a1 sortDescriptors:(id)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)recordInteraction:(id)a0;
- (BOOL)recordInteractions:(id)a0;
- (void)recordInteractions:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)recordInteractions:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
