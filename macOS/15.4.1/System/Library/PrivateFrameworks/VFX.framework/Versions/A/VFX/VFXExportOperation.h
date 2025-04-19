@interface VFXExportOperation : NSOperation

- (id)error;
- (float)progress;
- (BOOL)canceled;
- (BOOL)succeded;

@end
