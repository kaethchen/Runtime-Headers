@class NSUUID, NSString, MCMPOSIXUser, NSURL, NSDictionary, MCMError;

@interface MCMResultWithContainerBase : MCMResultBase <MCMResultWithContainer>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *containerPathIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) char *sandboxToken;
@property (readonly, nonatomic) BOOL existed;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) NSString *userManagedAssetsRelPath;
@property (readonly, nonatomic) NSString *creator;
@property (readonly, nonatomic) MCMError *error;
@property (nonatomic, getter=isCacheable) BOOL cacheable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
