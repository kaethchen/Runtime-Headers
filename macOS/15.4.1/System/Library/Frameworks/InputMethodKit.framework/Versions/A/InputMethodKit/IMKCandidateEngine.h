@class NSString;

@interface IMKCandidateEngine : NSObject <IMKCandidateEngine> {
    double _timeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)generateCandidatesFor:(id)a0;
- (void)generateCandidatesFor:(id)a0 onCompletion:(id /* block */)a1;
- (void)handleLearningHint:(int)a0 forTokenString:(id)a1 inContext:(id)a2;
- (void)setSyncronousTimeout:(double)a0;

@end
