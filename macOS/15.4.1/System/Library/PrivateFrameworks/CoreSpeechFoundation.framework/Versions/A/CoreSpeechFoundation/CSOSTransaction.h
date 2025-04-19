@class NSString, NSObject;
@protocol OS_os_transaction;

@interface CSOSTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_description;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;

@end
