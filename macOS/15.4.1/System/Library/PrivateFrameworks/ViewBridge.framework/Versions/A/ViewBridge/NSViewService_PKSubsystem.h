@class NSString;

@interface NSViewService_PKSubsystem : NSObject <PKModularService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initForPlugInKit;
+ (id)_initForPlugInKit;

- (void)beginUsing:(id)a0 withBundle:(id)a1;
- (void)_beginUsing:(id)a0 withBundle:(id)a1;

@end
