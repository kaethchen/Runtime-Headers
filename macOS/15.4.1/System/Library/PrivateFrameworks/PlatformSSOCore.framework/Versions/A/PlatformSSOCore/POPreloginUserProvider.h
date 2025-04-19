@class NSArray, NSString;

@interface POPreloginUserProvider : NSObject <POUserIdentifierProvider>

@property (retain, nonatomic) NSArray *users;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)uniqueIdentifierForUserName:(id)a0;
- (id)initWithVolumeUUID:(id)a0;

@end
