@class NSObject;
@protocol IAsyncNodeOperationDelegateProtocol;

@interface FI_IAsyncNodeOperation : NSObject {
    struct OpaqueOperationRef { } *_operationRef;
    struct TOperationMonitor { struct unique_ptr<OperationMonitorEx, std::default_delete<OperationMonitorEx>> { struct __compressed_pair<OperationMonitorEx *, std::default_delete<OperationMonitorEx>> { struct OperationMonitorEx *__value_; } __ptr_; } fDetails; } _operationMonitor;
    struct vector<std::shared_ptr<TOperationRecord>, std::allocator<std::shared_ptr<TOperationRecord>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<TOperationRecord> *, std::allocator<std::shared_ptr<TOperationRecord>>> { void *__value_; } __end_cap_; } _operationRecordList;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
    struct TOperationIterator { struct unique_ptr<TOperationIteratorDetails, std::default_delete<TOperationIteratorDetails>> { struct __compressed_pair<TOperationIteratorDetails *, std::default_delete<TOperationIteratorDetails>> { struct TOperationIteratorDetails *__value_; } __ptr_; } fDetails; } _operationIterator;
    struct __wrap_iter<std::shared_ptr<TOperationRecord> *> { void *__i_; } _operationRecordIter;
    struct OperationStatus { unsigned int fStage; struct HFSUniStr255 { unsigned short length; unsigned short unicode[255]; } fCurrentName; long long fTimeEstimate; long long fItemsTotal; long long fItemsCompleted; long long fBytesTotal; long long fBytesCompleted; long long fFSItemsTotal; long long fFSItemsCompleted; } _status;
    unsigned int _respondsToFlags;
}

@property (retain, nonatomic) FI_IAsyncNodeOperation *selfReference;
@property (retain, nonatomic) NSObject<IAsyncNodeOperationDelegateProtocol> *delegate;
@property unsigned int options;

+ (id)operationWithNodes:(const void *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (const void *)nodes;
- (int)startOperation;
- (int)cancelOperation;
- (id)initWithNodes:(const void *)a0;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (int)cancelCurrentSuboperation;
- (void)configureForNodes:(const void *)a0;
- (void)configureOperationRecord:(void *)a0 forIndex:(unsigned long long)a1;
- (void)configureOperationRecord:(void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })firstNodeName;
- (int)handleCompletedNotification;
- (void)handleErrorNotification:(const struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0;
- (int)handleStatusNotification;
- (int)handleSuboperationCompleted:(unsigned int)a0 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (int)handleSuboperationStarted:(unsigned int)a0;
- (void)handleWarningNotification:(struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })operationIterFirst;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })operationIterNext;
- (void)resetOperationRecordIter;

@end
