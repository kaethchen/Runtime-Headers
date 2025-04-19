@interface SUMacControllerDiag : NSObject

+ (id)messageFromError:(id)a0;
+ (id)sharedDiag;
+ (void)sharedDiagsDumpStateWithReason:(id)a0 dumpingTo:(long long)a1 clearingAfter:(BOOL)a2;

@end
