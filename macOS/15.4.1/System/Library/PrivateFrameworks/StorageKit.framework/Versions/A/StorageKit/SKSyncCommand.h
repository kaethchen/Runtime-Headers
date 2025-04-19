@class NSError;

@interface SKSyncCommand : NSObject

@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)onCallbackWithError:(id)a0;
- (BOOL)returnWithError:(id *)a0;

@end
