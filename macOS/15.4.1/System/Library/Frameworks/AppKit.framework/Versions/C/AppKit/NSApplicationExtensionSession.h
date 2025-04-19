@class NSString, NSProgress, NSArray;

@interface NSApplicationExtensionSession : NSObject

@property (readonly) NSString *extensionType;
@property (retain) NSProgress *progress;
@property (readonly) NSArray *inputItems;

- (void)completeSessionReturningItems:(id)a0 error:(id)a1;

@end
