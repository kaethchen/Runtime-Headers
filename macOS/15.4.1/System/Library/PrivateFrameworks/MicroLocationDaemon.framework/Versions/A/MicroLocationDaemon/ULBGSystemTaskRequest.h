@class NSString;

@interface ULBGSystemTaskRequest : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long priority;
@property (nonatomic) long long requiresProtectionClass;
@property (nonatomic) BOOL resourceIntensive;
@property (nonatomic) long long resources;
@property (nonatomic) BOOL requiresBuddyComplete;
@property (nonatomic) BOOL requiresUserInactivity;
@property (nonatomic) BOOL postInstall;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)createRequestFromSelf;

@end
