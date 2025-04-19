@class NSArray;

@interface CHTextCheckingQuery : CHQuery {
    NSArray *_foundItems;
}

@property (readonly, copy, nonatomic) NSArray *foundItems;

- (void).cxx_destruct;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (BOOL)q_doesQueryResultDependOnDeclaredVariables;
- (BOOL)q_resultWantedForCompleteness:(long long)a0;
- (void)q_updateQueryResult;

@end
