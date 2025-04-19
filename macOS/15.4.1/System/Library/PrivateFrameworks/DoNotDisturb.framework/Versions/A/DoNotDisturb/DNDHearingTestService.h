@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DNDHearingTestService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_clientIdentifier;
}

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)a0;
- (BOOL)setHearingTestIsActive:(BOOL)a0 error:(id *)a1;

@end
