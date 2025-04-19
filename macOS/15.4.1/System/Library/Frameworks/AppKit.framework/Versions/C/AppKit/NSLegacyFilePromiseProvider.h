@class NSArray, NSString, NSValue;

@interface NSLegacyFilePromiseProvider : NSObject <NSFilePromiseCompletionTarget> {
    BOOL _isPromiseValid;
    NSValue *_weakPasteboard;
}

@property (copy) NSArray *filePromiseProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPasteboard:(id)a0;
- (void)draggingCancelled:(id)a0;
- (void)draggingEnded:(id)a0;
- (void)pasteboard:(id)a0 provideDataForType:(id)a1;
- (void)pasteboardFinishedWithDataProvider:(id)a0;

@end
