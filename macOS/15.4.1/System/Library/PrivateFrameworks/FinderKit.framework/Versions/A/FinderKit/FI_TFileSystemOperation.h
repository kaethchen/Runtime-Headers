@class NSObject;
@protocol TFileSystemOperationDelegateProtocol;

@interface FI_TFileSystemOperation : FI_IAsyncNodeOperation

@property (retain, nonatomic) NSObject<TFileSystemOperationDelegateProtocol> *delegate;

+ (id)operationWithNodes:(const void *)a0 delegate:(id)a1;

- (int)cancelOperation;
- (id)initWithNodes:(const void *)a0;
- (void)configureOperationRecord:(void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (id)initWithNodes:(const void *)a0 delegate:(id)a1;
- (id)makeDelegate;
- (int)startSuboperation:(unsigned int)a0 string:(id)a1 propertyList:(const void *)a2;
- (int)startSuboperation:(unsigned int)a0 string:(id)a1 propertyList:(const void *)a2 target:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a3;
- (int)uniqueNameProc:(id)a0 seedFileSuffix:(id)a1 reservedName:(id)a2;

@end
