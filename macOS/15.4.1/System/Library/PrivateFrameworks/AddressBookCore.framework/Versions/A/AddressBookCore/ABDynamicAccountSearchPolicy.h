@class NSString;
@protocol ABAccountConfigurationInternal;

@interface ABDynamicAccountSearchPolicy : NSObject <ABAccountSearchPolicy> {
    id<ABAccountConfigurationInternal> _accountConfiguration;
    Class _searchOperationClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isSearchable;
- (id)initWithAccountConfiguration:(id)a0 searchOperationClass:(Class)a1;
- (id)makeSearchOperation;
- (Class)searchOperationClass;

@end
