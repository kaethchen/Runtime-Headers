@class NSString, NSObject;
@protocol OS_os_log;

@interface BKUIDevice : NSObject {
    NSObject<OS_os_log> *_bkuiDeviceLog;
}

@property (readonly, nonatomic) NSString *modelName;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)displayName;
- (BOOL)isUnknown;
- (BOOL)isMacPro;
- (void)updateModelname;
- (BOOL)isMacBook;
- (BOOL)isMacMini;
- (BOOL)isiMac;

@end
