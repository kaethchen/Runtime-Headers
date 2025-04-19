@class SKMountParams;

@interface SKDiskImageAttachParams : NSObject

@property (nonatomic) BOOL is4KBlockSize;
@property (nonatomic) BOOL emulateExternalDisk;
@property (nonatomic) long long policy;
@property (copy, nonatomic) SKMountParams *mountParams;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL stdinPassPhrase;
@property (nonatomic) BOOL isManagedAttach;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithParams:(id)a0;
- (id)diAttachParamsWithExistingParams:(id)a0 error:(id *)a1;
- (id)diAttachParamsWithURL:(id)a0 error:(id *)a1;
- (void)setupDIAttachParams:(id)a0;

@end
