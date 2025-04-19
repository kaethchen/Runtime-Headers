@interface WFRunnerConnection : NSObject {
    void /* unknown type, empty encoding */ policy;
    void /* unknown type, empty encoding */ languageCode;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ onInterruption;
    void /* unknown type, empty encoding */ onInvalidation;
}

@property (nonatomic, readonly) long long targetType;
@property (nonatomic, copy) id /* block */ onInterruption;
@property (nonatomic, copy) id /* block */ onInvalidation;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)asyncRunnerWithReason:(id)a0 error:(id *)a1;
- (id)initWithRunDescriptor:(id)a0 host:(id)a1 onInterruption:(id /* block */)a2 onInvalidation:(id /* block */)a3 languageCode:(id)a4;
- (id)syncRunnerWithReason:(id)a0 error:(id *)a1;

@end
