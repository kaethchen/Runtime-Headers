@class NSURL;

@interface IMRemoteIntentUserVault : NSObject {
    void /* unknown type, empty encoding */ commonPathsMap;
}

@property (nonatomic, readonly) NSURL *baseDirectory;

+ (id)sharedUserVault;

- (id)init;
- (void).cxx_destruct;
- (void)closeTransaction;
- (id)convertedCommonPathForDirectory:(id)a0;
- (id)convertedPathForRemoteFile:(id)a0;
- (void)openTransactionIfNecessary;

@end
