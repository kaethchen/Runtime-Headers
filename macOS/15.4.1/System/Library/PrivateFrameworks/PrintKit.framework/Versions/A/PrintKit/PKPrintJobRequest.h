@class NSObject, PKPrintSettings, NSString, NSFileHandle, PKPrinterTool_Client, PKPrinterBonjourEndpoint;
@protocol OS_dispatch_queue;

@interface PKPrintJobRequest : NSObject {
    PKPrinterTool_Client *_job_connection;
    NSFileHandle *_streamHandle;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) PKPrinterBonjourEndpoint *printerName;
@property (copy) PKPrintSettings *printSettings;
@property (copy) NSString *fileType;

- (void).cxx_destruct;
- (void)_establishedJob:(id)a0 fileHandle:(id)a1;
- (void)finishRequest0:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)finishRequest:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithPrinterName:(id)a0;
- (void)startRequestCompletionHandler:(id /* block */)a0;
- (void)writeRequestData:(id)a0 completionHandler:(id /* block */)a1;

@end
