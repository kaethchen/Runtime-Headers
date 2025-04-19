@class NSString;

@interface RamrodFileManagerDelegate : NSObject <NSFileManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)fileManager:(id)a0 shouldProceedAfterError:(id)a1 copyingItemAtPath:(id)a2 toPath:(id)a3;

@end
