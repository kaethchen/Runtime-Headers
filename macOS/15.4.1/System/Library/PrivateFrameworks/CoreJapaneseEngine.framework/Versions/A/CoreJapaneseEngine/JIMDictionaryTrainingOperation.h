@class JIMDictionaryTrainer;

@interface JIMDictionaryTrainingOperation : NSOperation {
    unsigned long long _processedFileID;
    long long _processedRecordNumber;
    long long _processedTokenCount;
    double _timeoutInterval;
}

@property (weak) JIMDictionaryTrainer *parentTrainer;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (void)_checkAddress:(id)a0 andAddAliases:(id)a1 to:(id)a2;
- (void)_finalizeEnvironment;
- (id)_myMailAddresses;
- (void)_prepareEnvironment;
- (BOOL)_processRecordInfo:(id)a0;
- (id)_tokenArrayFromTokenData:(id)a0;

@end
