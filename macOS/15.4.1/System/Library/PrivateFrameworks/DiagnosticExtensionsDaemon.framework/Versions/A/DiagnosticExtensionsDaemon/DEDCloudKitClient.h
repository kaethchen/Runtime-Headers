@class DEDBugSessionConfiguration, DEDBugSession, NSObject, CKContainer;
@protocol OS_os_log;

@interface DEDCloudKitClient : NSObject

@property (retain, nonatomic) DEDBugSession *bugSession;
@property (retain, nonatomic) DEDBugSessionConfiguration *bugSessionConfig;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) CKContainer *container;

- (void).cxx_destruct;
- (id)initWithBugSession:(id)a0 configuration:(id)a1;
- (void)uploadRecords:(id)a0 taskIdentifier:(id)a1 totalUploadSize:(id)a2 perRecordProgressBlock:(id /* block */)a3 perRecordSaveBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;

@end
