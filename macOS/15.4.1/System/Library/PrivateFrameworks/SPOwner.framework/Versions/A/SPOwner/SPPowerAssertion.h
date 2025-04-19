@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SPPowerAssertion : NSObject

@property (copy, nonatomic) NSString *reason;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned int powerAssertionId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)drop;
- (void)hold;
- (id)assertionType;
- (void)_drop;
- (id)assertionName;
- (id)initWithReason:(id)a0 type:(unsigned long long)a1 timeout:(double)a2;
- (id)powerAssertionOption;

@end
