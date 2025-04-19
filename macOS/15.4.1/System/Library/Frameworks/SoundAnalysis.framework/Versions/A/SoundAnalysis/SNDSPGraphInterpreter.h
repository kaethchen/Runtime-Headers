@interface SNDSPGraphInterpreter : NSObject {
    struct unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> { struct __compressed_pair<DSPGraph::Interpreter *, std::default_delete<DSPGraph::Interpreter>> { struct Interpreter *__value_; } __ptr_; } _interpreter;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
