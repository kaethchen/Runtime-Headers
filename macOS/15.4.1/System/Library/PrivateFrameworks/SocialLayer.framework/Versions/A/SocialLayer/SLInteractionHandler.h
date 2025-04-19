@class NSString;

@interface SLInteractionHandler : NSObject

@property (retain, nonatomic) NSString *appIdentifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)initWithAppIdentifier:(id)a0;
- (id)fetchAttributionForAttributionIdentifier:(id)a0;
- (void)feedbackForHighlightIdentifier:(id)a0 withType:(unsigned long long)a1 variant:(id)a2 completionBlock:(id /* block */)a3;
- (id)fetchInteractionsWithLimit:(unsigned long long)a0 reason:(id)a1 variant:(id)a2 error:(id *)a3;
- (id)fetchInteractionsWithLimit:(unsigned long long)a0 variant:(id)a1 error:(id *)a2;

@end
