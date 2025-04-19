@class NSString;

@interface DTSIOServiceImpl : NSObject <DTSIOService>

@property (readonly, nonatomic) unsigned int service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (id)openWithTask:(unsigned int)a0 connectionType:(unsigned int)a1 error:(int *)a2;

@end
