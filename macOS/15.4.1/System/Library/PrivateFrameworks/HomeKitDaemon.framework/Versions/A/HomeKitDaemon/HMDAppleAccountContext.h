@class NSString, NSArray;

@interface HMDAppleAccountContext : HMFObject <HMFObject>

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *username;
@property (readonly, copy) NSString *alternateDSID;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;

@end
