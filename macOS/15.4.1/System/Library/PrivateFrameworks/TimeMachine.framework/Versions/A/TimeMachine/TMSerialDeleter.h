@class NSString;

@interface TMSerialDeleter : NSObject <TMBackupDeleterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)deleteBackupAtURL:(id)a0 willUnlinkBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2 error:(id *)a3;

@end
