@class NSString, PKDisplayablePassEntitlement, PKPassEntitlementsComposer, PKPassSharedEntitlement;
@protocol NSCopying;

@interface PKPassEntitlementsComposerEntry : NSObject <PKIdentifiable> {
    PKPassEntitlementsComposer *_parentEntitlementComposer;
}

@property (retain, nonatomic) PKDisplayablePassEntitlement *displayableEntitlement;
@property (retain, nonatomic) PKPassSharedEntitlement *sharedEntitlement;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
