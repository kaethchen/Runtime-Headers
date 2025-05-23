@class VSPersistentStorage, NSArray, VSAccountChannels, VSOptional, NSOperation;

@interface VSAccountSaveOperation : VSAsyncOperation

@property (copy, nonatomic) NSArray *unsavedAccounts;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSAccountChannels *unsavedChannels;
@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperation *currentOperation;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)_startAccountChannelsSaveOperation;
- (void)_startCredentialSaveOperation;
- (void)executionDidBegin;
- (id)initWithUnsavedAccounts:(id)a0 channels:(id)a1 storage:(id)a2;

@end
