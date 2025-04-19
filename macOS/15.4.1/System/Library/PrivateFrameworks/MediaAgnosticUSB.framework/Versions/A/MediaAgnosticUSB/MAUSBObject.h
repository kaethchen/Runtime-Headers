@class NSObject;
@protocol OS_os_log;

@interface MAUSBObject : NSObject {
    NSObject<OS_os_log> *_log;
}

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)log;
- (long long)refCount;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
