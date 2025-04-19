@class NSPasteboardItem, NSObject;
@protocol OS_dispatch_semaphore;

@interface _VZSpiceAgentCorePasteboardItemState : NSObject {
    NSPasteboardItem *_item;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void).cxx_destruct;

@end
