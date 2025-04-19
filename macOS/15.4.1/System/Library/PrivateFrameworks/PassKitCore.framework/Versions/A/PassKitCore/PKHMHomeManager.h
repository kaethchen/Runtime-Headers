@class NSString;

@interface PKHMHomeManager : NSObject <HMHomeManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)fetchHomeIdentifierForPassSerialNumber:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchHomesWithCompletion:(id /* block */)a0;
- (void)fetchLockAccessoryWithTerminalReaderIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)hasHomeAccessScheduleForPassSerialNumber:(id)a0 withCompletion:(id /* block */)a1;
- (void)isHomeAccessRestrictedForPassSerialNumber:(id)a0 withCompletion:(id /* block */)a1;
- (void)setLockStateToSecuredForLockAccessory:(id)a0 withCompletion:(id /* block */)a1;

@end
