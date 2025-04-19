@interface _NURenderPipelineBlockVariable : NURenderPipelineFunction {
    id /* block */ _evaluationBlock;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)evaluate:(id)a0 error:(out id *)a1;
- (id)initWithEvaluationBlock:(id /* block */)a0;
- (BOOL)isEqualToBlockVariable:(id)a0;

@end
