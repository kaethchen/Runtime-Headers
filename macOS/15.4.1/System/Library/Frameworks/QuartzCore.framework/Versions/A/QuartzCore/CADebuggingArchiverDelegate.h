@class NSString;

@interface CADebuggingArchiverDelegate : NSObject <NSKeyedArchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)CA_shouldArchiveValueForKey:(id)a0 ofObject:(id)a1;

@end
