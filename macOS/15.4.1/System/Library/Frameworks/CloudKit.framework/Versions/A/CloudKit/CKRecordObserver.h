@class CKContainerSetupInfo, NSString;
@protocol CKRecordObservable;

@interface CKRecordObserver : NSObject <CKPropertiesDescription, NSCopying>

@property (readonly, copy, nonatomic) CKContainerSetupInfo *containerInfo;
@property (readonly, nonatomic) id<CKRecordObservable> provider;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithContainer:(id)a0 recordType:(id)a1;
- (id)initWithContainerInfo:(id)a0 recordType:(id)a1 provider:(id)a2;
- (void)registerWithBlock:(id /* block */)a0;

@end
