@class NSString;

@interface _EFProtectedFile : NSObject <EFPubliclyDescribable> {
    int _fileDescriptor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fileDescriptorLock;
    BOOL _filePathIsSensitive;
    int _protectionClass;
    NSString *_filePath;
}

@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
