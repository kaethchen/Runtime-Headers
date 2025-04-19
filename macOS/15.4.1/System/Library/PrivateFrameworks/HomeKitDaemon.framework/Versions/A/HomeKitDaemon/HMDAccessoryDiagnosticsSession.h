@class NSString, HMDAccessoryDataStreamAdapter, NSDictionary, NSFileHandle, HMDAccessoryDiagnosticsSettings, NSNumber;

@interface HMDAccessoryDiagnosticsSession : HMDAccessoryDiagnosticsSessionInternal <HMDAccessoryDataStreamAdapterDelegate>

@property (readonly) NSString *reason;
@property (readonly) HMDAccessoryDiagnosticsSettings *settings;
@property (retain) HMDAccessoryDataStreamAdapter *dataStream;
@property (copy) id /* block */ pendingCompletionHandler;
@property (copy) NSDictionary *urlParameters;
@property (retain) NSNumber *expectedDataSequenceNumber;
@property (retain) NSFileHandle *fileHandle;
@property BOOL readyForDataTransfer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)fileExtension;
- (void)shutDown;
- (void)_callCompletionHandlerWithError:(id)a0;
- (id)attributeDescriptions;
- (BOOL)_handleReceivedData:(id)a0;
- (id)_createLogFile;
- (void)_setUpWithOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)_validDataSequenceNumber:(id)a0;
- (BOOL)dataStreamAdapter:(id)a0 didReceiveData:(id)a1;
- (void)dataStreamAdapterDidCompleteDataRead:(id)a0;
- (void)dataStreamAdapterDidFailDataRead:(id)a0;
- (id)hapAccessory;
- (id)initWithAccessory:(id)a0 settings:(id)a1;
- (void)readDataWithCompletion:(id /* block */)a0;
- (void)setUpWithOptions:(id)a0 completion:(id /* block */)a1;

@end
