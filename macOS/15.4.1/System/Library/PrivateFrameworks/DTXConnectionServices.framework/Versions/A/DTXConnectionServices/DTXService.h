@class DTXChannel, NSString;

@interface DTXService : NSObject <DTXAllowedRPC>

@property (readonly, retain, nonatomic) DTXChannel *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyRegistersCapabilities;
+ (void)instantiateServiceWithChannel:(id)a0;
+ (void)registerCapabilities:(id)a0;

- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;
- (void)messageReceived:(id)a0;

@end
