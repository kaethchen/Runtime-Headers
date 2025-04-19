@class NSString, AAPApplicationTerminator;

@interface AAPCommandQuitAll : SAAppsQuitAllApps <AFServiceCommand>

@property (retain, nonatomic) AAPApplicationTerminator *terminator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)performWithCompletion:(id /* block */)a0;
- (id)_selfReferencingCommandFailedWithReason:(id)a0;
- (id)_selfReferencingCommandSucceeded;

@end
