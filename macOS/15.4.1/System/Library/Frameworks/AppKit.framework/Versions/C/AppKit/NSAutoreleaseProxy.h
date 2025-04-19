@class NSThread, NSAutoreleaseIdentifier;

@interface NSAutoreleaseProxy : NSObject

@property (readonly) NSThread *initialThread;
@property (readonly) NSAutoreleaseIdentifier *identifier;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;

@end
