@class NSString;

@interface FI_TFileSystemOperationDelegate : NSObject <TFileSystemOperationDelegateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

+ (id)makeDelegate;

@end
