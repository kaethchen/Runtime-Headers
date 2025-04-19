@class TADeviceManager, NSString;

@interface TAOperation : NSObject <TANotificationDelegate>

@property (nonatomic) BOOL started;
@property (readonly, nonatomic) TADeviceManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)cancelWithError:(id *)a0;
- (BOOL)startWithError:(id *)a0;
- (id)initWithDeviceManager:(id)a0;
- (void)status:(unsigned int)a0 withValue:(void *)a1;

@end
