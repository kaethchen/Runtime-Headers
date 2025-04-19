@class NSUUID, _OSDataProtectionManager;

@interface _OSDataProtectionStateMonitor : NSObject

@property (readonly, nonatomic) _OSDataProtectionManager *manager;
@property (readonly, nonatomic) NSUUID *handlerUUID;
@property (copy, nonatomic) id /* block */ changeHandler;

+ (id)dataProtectionClassA;
+ (id)dataProtectionClassC;
+ (id)dataProtectionClassD;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isDataAvailableFor:(id)a0;
- (BOOL)unnotifiedIsDataAvailableForClassC;

@end
