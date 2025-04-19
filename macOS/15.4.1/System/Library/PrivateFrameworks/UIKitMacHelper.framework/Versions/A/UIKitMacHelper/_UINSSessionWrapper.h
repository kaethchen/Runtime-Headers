@class UINSDragSession, NSDraggingSession;
@protocol UINSDragOperationMasks, UINSDragSessionHandler;

@interface _UINSSessionWrapper : NSObject

@property (retain) NSDraggingSession *internalDragSession;
@property (retain) UINSDragSession *externalDragSession;
@property (retain) id<UINSDragSessionHandler> sessionHandler;
@property (retain) id<UINSDragOperationMasks> operationMasks;

- (void).cxx_destruct;

@end
