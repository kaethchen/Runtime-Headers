@class NSOperationQueue;

@interface ABEmailCertificateController : NSObject {
    NSOperationQueue *_operationQueue;
}

+ (id)sharedController;
+ (id)certificateImage;

- (id)init;
- (void).cxx_destruct;
- (void)cancelPendingCertLookups;
- (id)certificateButton;
- (void)certificateSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)collectionDidInsertDatumView:(id)a0;
- (BOOL)hasPendingOperations;
- (void)showCertificatePanel:(id)a0;

@end
