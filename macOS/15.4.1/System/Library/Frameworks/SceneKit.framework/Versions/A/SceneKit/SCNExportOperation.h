@interface SCNExportOperation : NSOperation

- (id)error;
- (double)progress;
- (BOOL)canceled;
- (BOOL)succeded;

@end
