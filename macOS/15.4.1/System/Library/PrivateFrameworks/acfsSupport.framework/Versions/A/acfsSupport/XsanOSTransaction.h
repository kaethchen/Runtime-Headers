@class NSObject;
@protocol OS_os_transaction;

@interface XsanOSTransaction : NSObject

@property (retain) NSObject<OS_os_transaction> *ourTask;

+ (id)newWithTitle:(const char *)a0;

- (id)initWithTitle:(const char *)a0;

@end
