@class NSString, SSFileCopy, NSLock;

@interface SSFileTransfer : NSObject {
    SSFileCopy *activeCopy;
    NSLock *lock;
}

@property int direction;
@property (copy) NSString *sourcePath;
@property (copy) NSString *destinationPath;
@property (copy) NSString *remoteComputerName;
@property (readonly) NSString *errorString;
@property unsigned long long bytesToCopy;
@property unsigned long long bytesCopied;
@property int state;
@property (copy) NSString *displayName;
@property (retain) SSFileCopy *activeCopy;
@property (copy) id /* block */ completionHandler;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)dictionaryRepresentation;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)observe:(id)a0;
- (void)restoreFromDictionaryRepresentation:(id)a0;
- (void)unobserve:(id)a0;

@end
