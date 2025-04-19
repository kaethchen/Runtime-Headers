@class OFNSOperation;

@interface OMSlideshowExportOperationProgressHandlerCaller : NSObject {
    OFNSOperation *_operation;
}

- (void)dealloc;
- (id)initWithOperation:(id)a0;
- (void)exportProgress:(id)a0;

@end
