@class CDPContext;

@interface CDPRecoveryKeyStatusProvider : NSObject {
    CDPContext *_context;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)isRecoveryKeySetInSOSWithError:(id *)a0;
- (BOOL)idmsHasRK;
- (BOOL)isRecoveryKeySetInOctagonWithError:(id *)a0;

@end
