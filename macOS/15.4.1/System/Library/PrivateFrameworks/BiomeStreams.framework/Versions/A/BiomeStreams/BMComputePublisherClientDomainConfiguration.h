@class NSString;

@interface BMComputePublisherClientDomainConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, copy, nonatomic) NSString *machServiceName;
@property (readonly, copy, nonatomic) NSString *XPCPublisherStreamName;
@property (readonly, copy, nonatomic) NSString *biomeLaunchNotification;

- (void).cxx_destruct;
- (id)initWithDomain:(unsigned long long)a0;

@end
